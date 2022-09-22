#include "public.h"
#include "core.h"

QString Project::projName(const ProjectInfo &projectInfo)
{
    return projectInfo.ProjectPath + Dir_Separator +projectInfo.ProjectName+Project_File_Suffix;
}
int Project::createProject(const ProjectInfo &projectInfo)
{
    QString projFile = projectInfo.ProjectPath;
    QDir dir(projFile);
    if(!dir.exists())
    {
        if(!dir.mkdir(projFile))
        {
            return -2;
        }
    }

    //创建Project 文件
    QString project = projFile + Dir_Separator +projectInfo.ProjectName+Project_File_Suffix;
    QFile file(project);
    if(!file.open(QIODevice::WriteOnly))
    {
        return -3;
    }

    //创建默认的数据保存目录，并保存当前数据值
    QString dataPath = projFile + Dir_Separator +"data";
    dir.setPath(dataPath);
    if(!dir.exists())
    {
        if(!dir.mkdir(dataPath))
        {
            return -4;
        }
    }
    //创建workPath /抽取道集作业记录等工作目录
    QString workPath = projFile + Dir_Separator +"work";
    dir.setPath(workPath);
    if(!dir.exists())
    {
        if(!dir.mkdir(workPath))
        {
            return -5;
        }
    }
    /*保存项目基本信息
     *1)项目标记：gobs_project
     *
     */
    QJsonObject jobj;
    jobj.insert(Json_Key_Project_Indentity,QJsonValue(Json_Value_Project_Indentity));
    jobj.insert(Json_Key_Project_Areas,QJsonArray());
    jobj.insert(Json_Key_Project_Data_Path,QJsonValue(dataPath));
    jobj.insert(Json_Key_Project_Work_Path,QJsonValue(workPath));

    QJsonDocument doc;
    doc.setObject(jobj);

    file.write(doc.toJson());
    file.close();

    return 0;
}


int Project::checkProject(const ProjectInfo &projInfo,QString *errorStr)
{
    int ok = -1;
    QJsonValue value = getProjectInfo(projInfo,Json_Key_Project_Indentity,&ok,errorStr);
    //    qDebug()<<projInfo.ProjectPath<<projInfo.ProjectName;
    //    qDebug()<<value.toString()<<ok;
    if(ok != 0)
    {
        return ok;
    }
    if(value.toString() != Json_Value_Project_Indentity)
    {
        if(errorStr)
            *errorStr = " project file error.";
        return -5;
    }
    return 0;
}

//查询Project 信息
QJsonValue Project::getProjectInfo(const ProjectInfo &projInfo,const QString &key,int *ok,QString *errorStr)
{
    QString projFile = projName(projInfo);

    QFile file(projFile);
    if(ok)
        *ok = 0;
    if(!file.exists())
    {
        if(errorStr)
            *errorStr = "project file is missing.";
        if(ok)
            *ok = -1;
    }

    //判断gpro文件是否正确
    if(!file.open(QIODevice::ReadOnly))
    {
        if(errorStr)
            *errorStr = "open project file failed.";
        if(ok)
            *ok = -2;

    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();
    if(doc.isNull()){
        if(errorStr)
            *errorStr = " project file error.";
        if(ok)
            *ok = -3;

    }
    QJsonObject jobj = doc.object();
    QJsonValue  value = jobj.take(key);
    return value;
}

//修改Project 信息
int Project::updateProjectInfo(const ProjectInfo &projInfo,const QString &key,const QJsonValue &value
                               ,QString *errorStr)
{
    //先打开，找到对应key value ，更新
    QString projFile = projName(projInfo);
    QFile   file(projFile);
    if(!file.exists())
    {
        if(errorStr)
            *errorStr = "project file is missing.";
        return -1;
    }

    //判断gpro文件是否正确
    if(!file.open(QIODevice::ReadOnly))
    {
        if(errorStr)
            *errorStr = "open project file failed.";
        return -2;
    }
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();
    if(doc.isNull()){
        if(errorStr)
            *errorStr = " project file error.";
        return -3;
    }
    QJsonObject jobj = doc.object();
    QJsonValue s_value = jobj.take(key);
    jobj.remove(key);
    s_value = value;
    jobj.insert(key,s_value);

    if(!file.open(QIODevice::WriteOnly))
    {
        if(errorStr)
            *errorStr = "write project file error.";
        return -4;
    }
    doc.setObject(jobj);
    file.write(doc.toJson());
    file.close();
    return 0;
}


int Area::createArea(const ProjectInfo &projInfo,const QString &areaName,const QStringList &spsFiles)
{
    QString projPath = projInfo.ProjectPath;
    //QString projName = projInfo.ProjectName;

    QString areaFile = projPath+Dir_Separator+areaName;
    //1 创建工区文件
    QDir dir(areaFile);
    if(!dir.mkdir(projPath+Dir_Separator+areaName))
        return -1;

    //保存拷贝 sps 文件到文件夹
    //R file
    QStringList newfileNames;
    QString newFile;
    QFile rfile(spsFiles[0]);
    QFileInfo rfileInfo(spsFiles[0]);
    newFile = areaFile + Dir_Separator + rfileInfo.fileName();

    qDebug()<<"new rFile:"<<newFile;
    if(!rfile.copy(newFile)){
        dir.rmdir(projPath+Dir_Separator+areaName);
        return -2;
    }
    newfileNames<<newFile;
    //S file
    QFile sfile(spsFiles[1]);
    QFileInfo sfileInfo(spsFiles[1]);
    newFile = areaFile + Dir_Separator + sfileInfo.fileName();
    qDebug()<<"new rFile:"<<newFile;
    if(!sfile.copy(newFile)){
        dir.rmdir(projPath+Dir_Separator+areaName);
        return -2;
    }
    newfileNames<<newFile;
    //X file 可选
    QFile xfile(spsFiles[2]);
    if(xfile.exists()){
        QFileInfo xfileInfo(spsFiles[2]);
        newFile = areaFile + Dir_Separator + xfileInfo.fileName();
        qDebug()<<"new rFile:"<<newFile;
        if(!xfile.copy(newFile)){
            dir.rmdir(projPath+Dir_Separator+areaName);
            return -2;
        }
        newfileNames<<newFile;
    }else
        newfileNames<<"";
    //创建文件，目录等-------------------------------------
    QFile file(areaFile+Dir_Separator+areaName+Area_File_Suffix);
    if(!file.open(QIODevice::WriteOnly))
        return -3;

    QJsonObject obj;
    obj.insert(Json_Key_Area_Indentity,Json_Value_Area_Indentity);

    QJsonArray area_array = QJsonArray::fromStringList(newfileNames);
    obj.insert(Json_Key_Area_SPS_Files,area_array);


    QJsonDocument doc;
    doc.setObject(obj);
    file.write(doc.toJson());
    file.close();
    //--------------------------------------------------

    //保存工区名到项目文件中工区列表----------
    int ok = addArea(projInfo,areaName);
    if(ok!=0){
        Core::deleteDirectory(projPath+Dir_Separator+areaName);
        return -5;
    }

    return 0;
}

int Area::updateArea(const ProjectInfo &projInfo,const QString &areaName,const QStringList &spsFiles)
{
    QString projPath = projInfo.ProjectPath;
    //QString projName = projInfo.ProjectName;

    QString areaFile = projPath+Dir_Separator+areaName;
    //1 创建工区文件
    QDir dir(areaFile);

    //删除原来的目录
    if(dir.exists())
        dir.removeRecursively();
    //创建新的文件
    if(!dir.mkdir(projPath+Dir_Separator+areaName))
        return -1;
    //保存拷贝 sps 文件到文件夹
    //R file
    QStringList newfileNames;
    QString newFile;
    QFile rfile(spsFiles[0]);
    QFileInfo rfileInfo(spsFiles[0]);
    newFile = areaFile + Dir_Separator + rfileInfo.fileName();

    qDebug()<<"new rFile:"<<newFile;
    if(!rfile.copy(newFile)){
        dir.rmdir(projPath+Dir_Separator+areaName);
        return -2;
    }
    newfileNames<<newFile;
    //S file
    QFile sfile(spsFiles[1]);
    QFileInfo sfileInfo(spsFiles[1]);
    newFile = areaFile + Dir_Separator + sfileInfo.fileName();
    qDebug()<<"new rFile:"<<newFile;
    if(!sfile.copy(newFile)){
        dir.rmdir(projPath+Dir_Separator+areaName);
        return -2;
    }
    newfileNames<<newFile;
    //X file 可选
    QFile xfile(spsFiles[2]);
    if(xfile.exists()){
        QFileInfo xfileInfo(spsFiles[2]);
        newFile = areaFile + Dir_Separator + xfileInfo.fileName();
        qDebug()<<"new rFile:"<<newFile;
        if(!xfile.copy(newFile)){
            dir.rmdir(projPath+Dir_Separator+areaName);
            return -2;
        }
        newfileNames<<newFile;
    }else
        newfileNames<<"";
    //创建文件，目录等-------------------------------------
    QFile file(areaFile+Dir_Separator+areaName+Area_File_Suffix);
    if(!file.open(QIODevice::WriteOnly))
        return -3;

    QJsonObject obj;
    obj.insert(Json_Key_Area_Indentity,Json_Value_Area_Indentity);

    QJsonArray area_array = QJsonArray::fromStringList(newfileNames);
    obj.insert(Json_Key_Area_SPS_Files,area_array);


    QJsonDocument doc;
    doc.setObject(obj);
    file.write(doc.toJson());
    file.close();
    //--------------------------------------------------

    return 0;
}

int Area::addArea(const ProjectInfo &projInfo,const QString &areaName)
{
    QString projPath = projInfo.ProjectPath;
    QString projName = projInfo.ProjectName;

    QString projFile = projPath+Dir_Separator+projName+Project_File_Suffix;

    QFile file(projFile);
    if(!file.open(QIODevice::ReadOnly))
        return -1;
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();
    QJsonObject mainObj = doc.object();
    QJsonArray areasArray = mainObj.take(Json_Key_Project_Areas).toArray();
    mainObj.remove(Json_Key_Project_Areas);
    //增加area
    areasArray.append(QJsonValue(areaName));
    mainObj.insert(Json_Key_Project_Areas,areasArray);

    doc.setObject(mainObj);

    file.open(QIODevice::WriteOnly);
    file.write(doc.toJson());
    file.close();
    return 0;
}


//获取项目工区
QStringList Area::areasFromProject(const QString &projFile)
{
    QStringList areaList;
    QFile file(projFile);
    if(!file.open(QIODevice::ReadOnly))
        return areaList;

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();
    QJsonObject mainObj = doc.object();
    QJsonArray areasArray = mainObj.take(Json_Key_Project_Areas).toArray();
    QJsonArray::const_iterator it = areasArray.begin();
    while(it != areasArray.end()){
        areaList.append((*it).toString());
        it++;
    }
    return areaList;
}


//删除工区
int Area::deleteArea(const ProjectInfo &projInfo,const QString &areaName)
{
    QString projPath = projInfo.ProjectPath;
    QString projName = projInfo.ProjectName;

    //移除工区目录
    qDebug()<<"area dir:"<<projPath+Dir_Separator+areaName;
    if(!Core::deleteDirectory(projPath+Dir_Separator+areaName))
        return -1;

    //项目文件更新工区列表
    QString proFile = projPath+Dir_Separator+projName+Project_File_Suffix;

    QFile file(proFile);
    if(!file.open(QIODevice::ReadOnly))
        return -2;
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();
    QJsonObject mobj = doc.object();
    QJsonArray areaArray = mobj.take(Json_Key_Project_Areas).toArray();
    mobj.remove(Json_Key_Project_Areas);

    for(int i=areaArray.size()-1;i>=0;i--){
        if(areaArray.at(i).toString() == areaName)
            areaArray.removeAt(i);
    }

    mobj.insert(Json_Key_Project_Areas,areaArray);

    if(!file.open(QIODevice::WriteOnly))
        return -3;
    doc.setObject(mobj);
    file.write(doc.toJson());
    file.close();
    return 0;
}


QStringList Area::spsFiles(const ProjectInfo &projInfo,const QString &areaName)
{
    QStringList areaList;
    QString projPath = projInfo.ProjectPath;

    QString areaFile = projPath + Dir_Separator
            +areaName +Dir_Separator
            +areaName +Area_File_Suffix;
    QFile file(areaFile);
    if(!file.open(QIODevice::ReadOnly))
    {
        return areaList;
    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    if(doc.isNull())
        return areaList;
    QJsonObject obj = doc.object();
    if(obj.isEmpty())
        return areaList;

    QJsonArray area_array = obj.take(Json_Key_Area_SPS_Files).toArray();

    for(int i = 0;i<area_array.size();i++)
    {
        areaList.append(area_array.at(i).toString());
    }
    return areaList;
}

QStringList Area::spsFiles1(const QString &projPath,const QString &areaName)
{
    QStringList areaList;

    QString areaFile = projPath + Dir_Separator
            +areaName +Dir_Separator
            +areaName +Area_File_Suffix;
    QFile file(areaFile);
    if(!file.open(QIODevice::ReadOnly))
    {
        return areaList;
    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    if(doc.isNull())
        return areaList;
    QJsonObject obj = doc.object();
    if(obj.isEmpty())
        return areaList;

    QJsonArray area_array = obj.take(Json_Key_Area_SPS_Files).toArray();

    for(int i = 0;i<area_array.size();i++)
    {
        areaList.append(area_array.at(i).toString());
    }
    return areaList;
}

