#ifndef RECVORIENTEDSEGY_H
#define RECVORIENTEDSEGY_H

#include "abstractsegyproducer.h"

#include <QFile>
#include <QFileInfo>
#include <QString>
#include <QIODevice>
#include <QTextStream>
#include <QStringList>
//#include "FrftProcess.h"//===frft程序使用头文件
//#include "mclmcr.h"     //===matlab
#include "ToolsAlgo.h"

#include <Windows.h>

class ResponseProcessorf;
class RecvOrientedSegy : public AbstractSegyProducer
{
public:
    RecvOrientedSegy();
    ~RecvOrientedSegy();
protected:
    bool    preProcesss();
    bool    run();
    bool   finalize();

private:
    //查询数据文件目录，所有数据设备,从数据库查找其对应接受站点
    bool getDevicesInfo();

    //申请道内存,数据道内存-----
    bool allocInitMemory();

    //解析炮时文件
    bool resvShotInform();

    //根据设备和接收站点，接受站点范围，检出有效设备
    QList<DepolyedDevice *> checkEffectiveDevice();

    //读取数据文件所有信息-----
    DataFileInfo *readDataFileInfo(DepolyedDevice *depolyedDevice);

    //找到的GOBS对应的站点
    Station findStation(const float &line,const int &station) const;

    bool findStation(DepolyedDevice *depolyedDevice,int *lineNo, int *staNo);

    //读取文件TimeErr
    bool readTimeErrFile(const QString &filename,DataFileInfo *dataFileInfo);

    //====zhw add 生成ACU中间文件并插值获得钟差
    bool readCfgFile(DataFileInfo *dataFileInfo, QString &errorStr);

    //读取最新的log 文件
    bool readLogFile(DataFileInfo *dataFileInfo);
    //数据目录下的数据文件整理
    bool getDataFiles(const QString &dataPath,DataFileInfo *dataFileInfo,QString *errStr);

    //根据文件列表计算总的样点数
    long long calTotalNs(const QString &dataPath,const QList<FileInfo*> &fileInfos);

    //run 子函数-------------------------
    //打开输出文件,初始化卷头信息
    bool openSegyFiles(DepolyedDevice *);
    bool closeSegyFiles(bool ok = true);

    bool openInputFile(FileInfo*  fileInfo);
    void closeInputFile(FileInfo* fileInfo);

    //数据处理主函数
    bool mainRecvProcess(DataFileInfo *);
    //计算炮时
    double calTimeErr(DataFileInfo *dataFileInfo,const int &file_index,const QDateTime &shotTime);

    bool readDataFromFile(FileInfo *fileInfo,int sample_offset,int samples,float *in,int ins);

    /// 20220914 ZHW-ADD 新版本数据格式读取有效数据文件列表和采样率
    bool readDataFileLstInform(DataFileInfo *pDatafInform, DepolyedDevice *pDepolyedDevice);

private:
    QList<DepolyedDevice *> m_depolyedDevices;
    ShotLineTimes      *m_shotLineTimes;
    ResponseProcessorf *m_respProcessor;
    //输出文件
    SegyFileHandles *m_segyFileHandle;
    TraceHead       *m_traceHead;//道头
    float           *m_data;     //数据
    QString         m_ACUFileName;
};

#endif // RECVORIENTEDSEGY_H
