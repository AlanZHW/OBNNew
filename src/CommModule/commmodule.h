#ifndef COMMMODULE_H
#define COMMMODULE_H

#include <QtCore>
#include "gpublic.h"
#include "commmodule_global.h"

//模块基类
class COMMMODULESHARED_EXPORT CommModule
{
public:
    CommModule();
    //初始化启动参数,读取检查工区信息，如果有错误则退出
    bool initArgs(int argc, char **argv);

    //检查工区信息，信息错误则报错
    bool CheckProject(QString& errorStr);

    virtual bool init(){return true;}

protected:
    //工区路径和名称
    QString        m_projPath,m_projName;
    ProjectInfo   m_projInfo;
};


//模块构造类--------
class  COMMMODULESHARED_EXPORT ModuleBuilder
{
public:
    ModuleBuilder(){}

    static int buildModule(int argc,char **argv,CommModule &module);
};

#endif // COMMMODULE_H
