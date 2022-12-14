#include "positionchart.h"

#include <assert.h>
#include <QPainter>

#include "axis.h"

#include <QDebug>

PositionChart::PositionChart(QWidget *parent)
    :Chart(parent)
{
    initChart();
}

void PositionChart::setCoordSystemInfo(const double& pX0, const double& pY0, const double& pZ0)
{
    m_posChartDrawer->setCoordSystemInfo(pX0, pY0, pZ0);
}

void PositionChart::setData(const QVector<GpsCoord> &cord1s, const QVector<GobsCoord> &cord2s)
{
    m_posChartDrawer->setData(cord1s,cord2s);

    DataScope dataScope = m_posChartDrawer->dataScope();

    updateAxisScope(dataScope);

    m_posChartDrawer->draw();
}

void PositionChart::addGpsPoint(const GpsCoord &cord)
{
    m_posChartDrawer->addGpsPoint(cord);

    DataScope dataScope = m_posChartDrawer->dataScope();

    updateAxisScope(dataScope);

    m_posChartDrawer->draw();
}

void PositionChart::addGobsPoint(const GobsCoord &cord)
{
    m_posChartDrawer->addGobsPoint(cord);

    DataScope dataScope = m_posChartDrawer->dataScope();

    updateAxisScope(dataScope);

    m_posChartDrawer->draw();
}

void PositionChart::setGpsPoint(int idx, const GpsCoord &cord)
{
    m_posChartDrawer->setGpsPoint(idx,cord);
}

void PositionChart::setGobsPoint(int idx, const GobsCoord &cord)
{
    m_posChartDrawer->setGobsPoint(idx,cord);
}



void PositionChart::initChart()
{
    //设置ChartDrawer
    m_posChartDrawer = new PositionChartDrawer(this);
    this->setCharDrawer(m_posChartDrawer);

    //向ChartDrawer 设置坐标轴
    m_axisX = new ValueAxis(this);
    m_axisY = new ValueAxis(this);

    m_axisX->setMinSpacing(50);
    m_axisY->setMinSpacing(40);

    m_posChartDrawer->addAxis(Qt::AlignBottom,m_axisX);
    m_posChartDrawer->addAxis(Qt::AlignLeft,m_axisY);

    //设置margin 和 坐标轴占的空间
    m_posChartDrawer->setContentMargins(QMargins(5,5,5,5));
    m_posChartDrawer->setAixsSpaces(AxisSpaces(60,20,40,20));
}

void PositionChart::updateAxisScope(const DataScope &dataScope)
{
    m_axisX->setMin(dataScope.minX);
    m_axisX->setMax(dataScope.maxX);

    m_axisY->setMin(dataScope.minY);
    m_axisY->setMax(dataScope.maxY);
}

///=======================================================================================================

///PositionChartDrawer----
PositionChartDrawer::PositionChartDrawer(QObject *parent)
    :ChartDrawer(parent)
{
    this->setBackgroundColor(Qt::white);

}

/// 将坐标系进行设置
void PositionChartDrawer::setCoordSystemInfo(const double& pX0, const double& pY0, const double& pZ0)
{
//    // 画一条直线
//    QPainter *painter = new QPainter;// 创建QPainter一个对象
//    QPen pen;
//    pen.setColor(Qt::black);

//    painter->drawRect(graphRect());
//    painter->setRenderHint(QPainter::Antialiasing,true);

//    painter->setPen(pen);

    int height = graphRect().height();
    int width  = graphRect().width();

    qDebug() << "height = " << height << "\t width = " << width;

//    QPoint nPointH0(0, height/2);
//    QPoint nPointH1(width, height/2);
//    painter->drawLine(nPointH0, nPointH1);

//    QPoint nPointV0(width/2, 0);
//    QPoint nPointV1(width/2, height);
//    painter->drawLine(nPointV0, nPointV1);
}

void PositionChartDrawer::setData(const QVector<GpsCoord> &cord1s, const QVector<GobsCoord> &cord2s)
{
    m_gpsCords   = cord1s;
    m_gobsCords = cord2s;

    //计算数据范围
    calDataScope();
    dataChanged();
}

void PositionChartDrawer::addGpsPoint(const GpsCoord &cord)
{
    m_gpsCords.append(cord);

    //计算数据范围
    calDataScope();
    dataChanged();
}

void PositionChartDrawer::addGobsPoint(const GobsCoord &cord)
{
    m_gobsCords.append(cord);

    //计算数据范围
    calDataScope();
    dataChanged();
}

void PositionChartDrawer::setGpsPoint(int idx, const GpsCoord &cord)
{
    assert(idx>=0 && idx<m_gpsCords.size());
    m_gpsCords[idx] = cord;

    //计算数据范围
    calDataScope();
    dataChanged();
}

void PositionChartDrawer::setGobsPoint(int idx, const GobsCoord &cord)
{
    assert(idx>=0 && idx<m_gobsCords.size());
    m_gobsCords[idx] = cord;

    //计算数据范围
    calDataScope();
    dataChanged();
}


void PositionChartDrawer::calData()
{

}

void PositionChartDrawer::rePaint(QPainter *pt)
{
    //绘制边框
    pt->setPen(Qt::black);
    pt->drawRect(graphRect());
    pt->setRenderHint(QPainter::Antialiasing,true);
    //绘制GPS轨迹曲线
    pt->save();

    drawGpsPoints(pt);

    pt->setPen(Qt::red);
    drawGobsPoints(pt);

    pt->restore();
}

void PositionChartDrawer::calDataScope()
{
    if(m_gpsCords.size()<1)
    {
        m_dataScope.minX = m_dataScope.maxX = 0;
        m_dataScope.minY = m_dataScope.maxY = 0;
        return;
    }

    m_dataScope.minX = m_gpsCords[0].x;
    m_dataScope.maxX= m_gpsCords[0].x;

    m_dataScope.minY = m_gpsCords[0].y;
    m_dataScope.maxY= m_gpsCords[0].y;

    //统计GPS
    for(int i=1;i<m_gpsCords.size();i++){
        m_dataScope.minX = std::min(m_dataScope.minX,float(m_gpsCords[i].x));
        m_dataScope.maxX= std::max(m_dataScope.maxX,float(m_gpsCords[i].x));

        m_dataScope.minY = std::min(m_dataScope.minY,float(m_gpsCords[i].y));
        m_dataScope.maxY= std::max(m_dataScope.maxY,float(m_gpsCords[i].y));
    }

    qDebug()<<m_dataScope.minX<<m_dataScope.maxX<<m_dataScope.maxY<<m_dataScope.minY;
    //统计GOBS
    if(m_gobsCords.size()<1){
        m_dataScope.minZ =m_dataScope.maxZ = 0;
        //往外延伸1/10范围
        expandDataScope(&m_dataScope);
        return;
    }

    m_dataScope.minZ =m_dataScope.maxZ = m_gobsCords[0].z;

    for(int i=0;i<m_gobsCords.size();i++){
        m_dataScope.minX = std::min(m_dataScope.minX,float(m_gobsCords[i].x));
        m_dataScope.maxX= std::max(m_dataScope.maxX,float(m_gobsCords[i].x));

        m_dataScope.minY = std::min(m_dataScope.minY,float(m_gobsCords[i].y));
        m_dataScope.maxY= std::max(m_dataScope.maxY,float(m_gobsCords[i].y));

        m_dataScope.minZ = std::min(m_dataScope.minZ,float(m_gobsCords[i].z));
        m_dataScope.maxZ= std::max(m_dataScope.maxZ,float(m_gobsCords[i].z));
    }

    //往外延伸1/10范围
    expandDataScope(&m_dataScope);
}

void PositionChartDrawer::expandDataScope(DataScope *datascope)
{
    float dx = (datascope->maxX - datascope->minX)*0.05;
    float dy = (datascope->maxY - datascope->minY)*0.05;
    datascope->maxX += dx;
    datascope->minX  -= dx;

    datascope->minY  -=dy;
    datascope->maxY +=dy;
}

void PositionChartDrawer::drawGpsPoints(QPainter *pt)
{
    QPoint  beginPt = graphRect().bottomLeft();
    int height = graphRect().height();
    int width  = graphRect().width();

    float x,y;
    float phyWidth = m_dataScope.maxX - m_dataScope.minX;
    float phyHeight = m_dataScope.maxY - m_dataScope.minY;

    QScopedArrayPointer<QPoint> pts(new QPoint[m_gpsCords.size()]);
    for(int i=0;i<m_gpsCords.size();i++){
        x =beginPt.x()+ (m_gpsCords[i].x- m_dataScope.minX)/phyWidth*width;
        y =beginPt.y()- (m_gpsCords[i].y- m_dataScope.minY)/phyHeight*height;
        pts[i] = QPoint(x,y);

        //描点
        pt->drawEllipse(pts[i],2,2);
    }

    //绘制轨迹
    pt->drawPolyline(pts.data(),m_gpsCords.size());
}

void PositionChartDrawer::drawGobsPoints(QPainter *pt)
{
    QPoint  beginPt = graphRect().bottomLeft();
    int height = graphRect().height();
    int width  = graphRect().width();

    float phyWidth = m_dataScope.maxX - m_dataScope.minX;
    float phyHeight = m_dataScope.maxY - m_dataScope.minY;

    QPoint p;
    for(int i=0;i<m_gobsCords.size();i++)
    {
        p.setX(beginPt.x()+ (m_gobsCords[i].x- m_dataScope.minX)/phyWidth*width);
        p.setY(beginPt.y()- (m_gobsCords[i].y- m_dataScope.minY)/phyHeight*height);

        //描点
        pt->drawRect(QRect(p+QPoint(-2,-2) ,p+QPoint(2,2)));
    }
}


