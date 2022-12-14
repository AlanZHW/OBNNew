#include "nodequery.h"
#include <QHostAddress>
#include <QDebug>
#include <QDateTime>

#define Socket_WaitForConnect_Time 1
#define TCP_IP_PORT                5000

//最小查询延迟
#define Max_Query_Delay            30000

#include "rnitems.h"

//获取电压，工作电流，充电电压
static const char voltCmd[3] = {0x3a,0x01,0x62};
//获取仓温
static const char tempCmd[3] = {0x3a,0x01,0x60};
//获取仓压
static const char pressCmd[3] = {0x3a,0x01,0x61};

NodeQuery::NodeQuery(Node *owner)
    :QTcpSocket(owner),m_queryStep(NoQuery)
    ,m_running(false),m_count(0), m_stoped(true)
{
    connect(this,SIGNAL(readyRead()),this,SLOT(slotReadData()));
    connect(this,SIGNAL(stateChanged(QAbstractSocket::SocketState))
            ,this,SLOT(slotStateChanged(QAbstractSocket::SocketState)));
    connect(this, SIGNAL(connected()), this, SLOT(slotConnected()));
    connect(this, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));

    m_node = owner;
}

void NodeQuery::reConnect()
{
    qDebug() << "zhw debug ......ip = " << QHostAddress(m_node->ip());
    QDateTime current_time = QDateTime::currentDateTime();
    QString StrCurrentTime = current_time.toString("hh:mm:ss");
    flush();
    abort();
    qDebug() << "state = " << state();
    if(state() == QAbstractSocket::UnconnectedState)
    {
        this->disconnectFromHost();
        this->waitForDisconnected(1000);
        connectToHost(QHostAddress(m_node->ip()),TCP_IP_PORT);
        if(this->waitForConnected(1000))
            qDebug("connected!");
//        this->waitForConnected(1000);
    }
}

void NodeQuery::disConnect()
{
    this->disconnectFromHost();
    m_running = false;
}

void NodeQuery::start(const int &interval)
{
    m_interval = interval;
    m_stoped   = false;

#ifndef ZHW_DEBUG
    qDebug() << "zhw debug ...... " << __FILE__ << "\t" << __LINE__ << "\t" << __FUNCTION__ << "\t m_node->ip is:" << QHostAddress(m_node->ip()).toString().toStdString().c_str();
#endif

    //QString nCMD = "task kill /pid " +QString::number(TCP_IP_PORT) + " /F";
//    QString nCMD = "netstat -ano | findstr [" +QString::number(TCP_IP_PORT) + "]";
//    system(nCMD.toStdString().c_str());

//    if(this->bind(TCP_IP_PORT))
//    {
//        fprintf(fptx, "success ...... \n");
//    }
//    else
//    {
//        fprintf(fptx, "failed .....\n");
//    }
//    this->disconnectFromHost();

#if 1
    connectToHost(QHostAddress(m_node->ip()),TCP_IP_PORT);
    this->waitForConnected(1000);
#else
    QTcpSocket* nTcp = new QTcpSocket;
    nTcp->connectToHost(QHostAddress(m_node->ip()),TCP_IP_PORT);
    if(nTcp->waitForConnected(1000))
    {
        if(sizeof(voltCmd) != nTcp->write(voltCmd,sizeof(voltCmd)))
        {
            qDebug() << __LINE__ << "\t send faile!";
        }
        else
        {
            qDebug() << __LINE__ << "\t send success!";
        }
    }
    else
    {
        qDebug() << __LINE__ << "\t connect faile!";
    }
#endif
}

void NodeQuery::stop()
{
    m_count = 0;
    flush();
    m_stoped = true;
    this->abort();
    m_running = false;
}

void NodeQuery::refresh()
{
    //两种节点状态处理
    //1)节点状态为 false
    if(!m_node->state())
    {
        m_count ++;
        //当前状态为false的节点,几个周期查询链接一次，降低频率
        if(m_count*m_interval>=Max_Query_Delay)
        {
            reConnect();
            m_count = 0;
        }
        return;
    }
    else
    {
        //节点正在运行,可能是通讯中断，需要重新刷新链接启动
        if(m_running)
        {
            m_running = false;
            reConnect();
            return;
        }
    }

    //节点状态 ok，并且上次运行结束，直接查询刷新
    startQuery();
}

void NodeQuery::startQuery()
{
    if(this->state() != QAbstractSocket::ConnectedState)
    {
        return;
    }
    m_running = true;
    t.start();
    qDebug() << __LINE__ << "startQuery \t" << state() << "\t" << sizeof(voltCmd);
    //启动查询,从电压-仓温-仓压顺序查询

//    QString nCMD = "3A0162";
//    write(nCMD.toStdString().c_str(), sizeof(voltCmd));

    qint64 nReturnNum = write(voltCmd,sizeof(voltCmd));
    qDebug() <<"nReturnNum is:" <<nReturnNum;

    m_queryStep = QueryVoltage;
}

void NodeQuery::slotReadData()
{

    quint16 iData;
    quint32 bdata;
    QByteArray byteArray = this->readAll();

    QString temp;
qDebug() << "byteArray is:" << byteArray;
qDebug() << "m_queryStep is:" << m_queryStep;
    if(m_queryStep == QueryVoltage)
    {
        //电压
        iData = (((byteArray[4]&0xff)<<8)|(byteArray[3]&0xff));
        temp = QString::number(iData);
        m_node->setVoltage(temp.toFloat()/1000.f);

        //工作电流
        iData=(((byteArray[6]&0xff)<<8)|(byteArray[5]&0xff));
        temp = QString::number(iData);
        m_node->setCurrent(temp.toFloat()/1000.f);

        //充电电压
        iData=(((byteArray[8]&0xff)<<8)|(byteArray[7]&0xff));
        temp = QString::number(iData);
        m_node->setChargeVolt(temp.toFloat()/1000.f);

        //查询仓温
        write(tempCmd,sizeof(tempCmd));
        m_queryStep = QueryTemp;
        return;
    }
    if(m_queryStep == QueryTemp)
    {
        //仓温
        iData = (((byteArray[4]&0xff)<<8)|(byteArray[3]&0xff));
        temp = QString::number(iData);
        m_node->setTemperature(temp.toFloat()/10.f);

        //查询仓压
        write(pressCmd,sizeof(pressCmd));
        m_queryStep = QueryPressure;
        return;
    }
    if( m_queryStep == QueryPressure)
    {
        //仓压
        bdata = ((byteArray[3]&0xff)|((byteArray[4]&0xff)<<8)
                |((byteArray[5]&0xff)<<16)|((byteArray[6]&0xff)<<24));

        temp = QString::number(bdata);
        m_node->setPressure(temp.toFloat()/101325.0f);

        //结束--------------------------------
        m_queryStep = NoQuery;
        m_running = false;

        //更新显示状态
        m_node->updateNode(State_Update);
    }
}

void NodeQuery::slotConnected(){
    QDateTime current_time = QDateTime::currentDateTime();
    QString StrCurrentTime = current_time.toString("hh:mm:ss");
}
void NodeQuery::slotDisconnected(){
    QDateTime current_time = QDateTime::currentDateTime();
    QString StrCurrentTime = current_time.toString("hh:mm:ss");
    qDebug() << "slotDisconnected ...... StrCurrentTime =" <<StrCurrentTime;
}

///
void NodeQuery::slotStateChanged(QAbstractSocket::SocketState state)
{
    qDebug() <<__LINE__<<"\t" <<"state is:" <<state;
    if(state == QAbstractSocket::UnconnectedState)
    {
        if(!m_stoped)
        {
            m_node->setState(false);
            m_node->updateNode();
        }
    }
    else if(state == QAbstractSocket::ConnectedState)
    {
        //开始查询
        m_node->setState(true);
        startQuery();
    }
}



