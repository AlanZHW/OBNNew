#include "exportsegydlg.h"
#include "ui_exportsegydlg.h"

//ExportSegyDlg-------------------------------
ExportSegyDlg::ExportSegyDlg(QWidget *parent)
    :QDialog(parent)
    ,ui(new Ui::ExportSegyDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("Export Seg-y Data");

    //设置validator
    ui->traceLenEdit->setValidator(new QIntValidator(100,100000,this));
    m_shotLineDlg = new ShotLineDlg(this);

    //
    m_areaDataInfo = 0;
    ui->textHeaderFrame->setFrameShape(QFrame::NoFrame);
}

ExportSegyDlg::~ExportSegyDlg()
{
    if(m_areaDataInfo){
        m_areaDataInfo->clearData();
        delete m_areaDataInfo;
        m_areaDataInfo = 0;
    }
}

void ExportSegyDlg::setProjectInfo(const ProjectInfo & projInfo)
{
    m_projInfo = projInfo;

    m_exportParameters.projectPath = m_projInfo.ProjectPath;
    m_exportParameters.projectName = m_projInfo.ProjectName;

    initByProject();
}

void ExportSegyDlg::initByProject()
{
    //初始化工区列表
    QString projFile = m_projInfo.ProjectPath+Dir_Separator+m_projInfo.ProjectName+Project_File_Suffix;
    QStringList areaList = Area::areasFromProject(projFile);
    ui->areasCbx->addItems(areaList);


    //设置默认原始数据 /data
    //ui->dataPathEdit->setText(QString("%1/%2").arg(m_projInfo.ProjectPath)
    //                    .arg("data"));
}

void ExportSegyDlg::updateScopeInfo()
{
    if(!m_areaDataInfo)
    {
        return;
    }
    /// ====== 选中输出炮道集
    if(ui->shotRbtn->isChecked())
    {
        StationInfo *shotStationInfo = m_areaDataInfo->shotStationInfo;
        //line
        ui->fromLineSpx->setRange(1,shotStationInfo->lineNum);
        ui->toLineSpx->setRange(1,shotStationInfo->lineNum);
        ui->fromLineSpx->setValue(1);
        ui->toLineSpx->setValue(shotStationInfo->lineNum);

        //station，计算站点最多的线
        int max_staNum = 0;
        for(int i =0;i<shotStationInfo->lineNum;i++){
            max_staNum = max_staNum<shotStationInfo->staLines[i].staNum?
                        shotStationInfo->staLines[i].staNum:max_staNum;
        }
        ui->fromStaSpx->setRange(1,max_staNum);
        ui->toStaSpx->setRange(1,max_staNum);
        ui->fromStaSpx->setValue(1);
        ui->toStaSpx->setValue(max_staNum);
    }
    /// ======选择输出检波点道集
    if(ui->recvRbtn->isChecked())
    {
        StationInfo *recvStationInfo = m_areaDataInfo->recvStationInfo;
        //line
        ui->fromLineSpx->setRange(1,recvStationInfo->lineNum);
        ui->toLineSpx->setRange(1,recvStationInfo->lineNum);
        ui->fromLineSpx->setValue(1);
        ui->toLineSpx->setValue(recvStationInfo->lineNum);

        //station，计算站点最多的线
        int max_staNum = 0;
        for(int i =0;i<recvStationInfo->lineNum;i++)
        {
            max_staNum = max_staNum<recvStationInfo->staLines[i].staNum ? recvStationInfo->staLines[i].staNum : max_staNum;
        }
        ui->fromStaSpx->setRange(1,max_staNum);
        ui->toStaSpx->setRange(1,max_staNum);
        ui->fromStaSpx->setValue(1);
        ui->toStaSpx->setValue(max_staNum);
    }
}


void ExportSegyDlg::on_CloseBtn_clicked()
{
    this->close();
}


void ExportSegyDlg::on_ShotLineBrwser_clicked()
{
    if(!m_shotLineDlg->shotLineFiles().isEmpty())
        m_shotLineDlg->show();
    QStringList shotlineFiles = QFileDialog::getOpenFileNames(this,"Select ShotLine Files"                                                          ,QDir::currentPath());
    if(shotlineFiles.isEmpty())
        return;

    shotlineFiles.sort();
    m_shotLineDlg->setShotLineFiles(shotlineFiles);
    m_shotLineDlg->show();
}

void ExportSegyDlg::on_areasCbx_currentIndexChanged(const QString &arg1)
{
    //根据area 工区，读取工区炮检点信息，初始化选择范围
    QString areaName = arg1;

    QStringList spsfiles = Area::spsFiles(m_projInfo,areaName);
    if(spsfiles.size()<2){
        QMessageBox::warning(this,"waring","Current area sps files error.");
        return;
    }

    if(m_areaDataInfo){
        m_areaDataInfo->clearData();
        delete m_areaDataInfo;
    }
    QString errString;
    m_areaDataInfo =  new AreaDataInfo;
    int ok = gobs_sps_files_SR_read(spsfiles,m_areaDataInfo,&errString);
    if(ok!=0)
    {
        QMessageBox::critical(this,"error",QString("Read area sps files error,Error:%1")
                              .arg(errString));
        return;
    }

    //设置最大范围
    updateScopeInfo();
}

void ExportSegyDlg::on_recvRbtn_clicked(bool checked)
{
    //共检波点
    if(checked)
    {
        ui->ScopeGbx->setTitle("Reciever Scope:");
        ui->lineLbl->setText("Reciever Line :");
        ui->stationLbl->setText("Reciever Station:");
        ui->dataPathLbl->setText("Origin Data Path:");

        ui->textHeaderFrame->show();
        ui->gatherInfoGbx->show();
        /// ======
        adjustSize();
        /// ======
        updateScopeInfo();
    }
}

void ExportSegyDlg::on_shotRbtn_clicked(bool checked)
{
    if(checked)
    {
        ui->ScopeGbx->setTitle("Shot Scope:");
        ui->lineLbl->setText("Shot Line :");
        ui->stationLbl->setText("Shot Station:");
        ui->dataPathLbl->setText("RecvSegy Data Path:");

        ui->textHeaderFrame->hide();
        ui->gatherInfoGbx->hide();
        /// ======
        adjustSize();
        /// ======
        updateScopeInfo();
    }
}

void ExportSegyDlg::on_fromLineSpx_valueChanged(int arg1)
{
    if(arg1>ui->toLineSpx->value()) {
        ui->toLineSpx->setValue(arg1);
    }
}

void ExportSegyDlg::on_toLineSpx_valueChanged(int arg1)
{
    if(arg1<ui->fromLineSpx->value()) {
        ui->fromLineSpx->setValue(arg1);
    }
}

void ExportSegyDlg::on_fromStaSpx_valueChanged(int arg1)
{
    if(arg1>ui->toStaSpx->value()) {
        ui->toStaSpx->setValue(arg1);
    }
}

void ExportSegyDlg::on_toStaSpx_valueChanged(int arg1)
{
    if(arg1<ui->fromStaSpx->value()) {
        ui->fromStaSpx->setValue(arg1);
    }
}

void ExportSegyDlg::on_dataPathBrwser_clicked()
{
    QString dataPath = QFileDialog::getExistingDirectory(this,"Select Origin Data Path"
                                                         ,QDir::currentPath());
    if(dataPath.isEmpty())
        return;
    ui->dataPathEdit->setText(dataPath);
}

void ExportSegyDlg::on_outputPathBrwser_clicked()
{
    QString dataPath = QFileDialog::getExistingDirectory(this,"Select Ouput Path"
                                                         ,QDir::currentPath());
    if(dataPath.isEmpty())
        return;
    ui->outputFilePathEdit->setText(dataPath);
}

void ExportSegyDlg::on_startBtn_clicked()
{
    //判断处理数据类型-共检波点/共炮
    if(ui->recvRbtn->isChecked())
    {
        m_exportParameters.segyType = 0;
    }
    else
    {
        m_exportParameters.segyType = 1;
    }

    //Basic Parameter 基本参数
    //job name
    if(ui->jobEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"warning","Input Job Name.");
        return;
    }

    m_exportParameters.jobName = ui->jobEdit->text().trimmed();

    //area
    if(ui->areasCbx->currentText().isEmpty())
    {
        QMessageBox::warning(this,"warning","Must choose a area.");
        return;
    }
    m_exportParameters.areaName = ui->areasCbx->currentText();

    //数据目录
    if(ui->dataPathEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"warning","Must select data path.");
        return;
    }
    if(!QDir(ui->dataPathEdit->text()).exists())
    {
        QMessageBox::warning(this,"warning","Origin Data Path  not exist");
        return;
    }
    m_exportParameters.dataPath = ui->dataPathEdit->text();

    //ouput Path
    if(ui->outputFilePathEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"warning","Input output file path.");
        return;
    }
    if(!QDir(ui->outputFilePathEdit->text()).exists()){
        QMessageBox::warning(this,"warning","Output file path not exists.");
        return;
    }
    m_exportParameters.outputPath = ui->outputFilePathEdit->text();
qDebug() << "outputPath = " << m_exportParameters.outputPath << "\t segyType = " << m_exportParameters.segyType;
    //共检波点数据文件信息------------------
    if(m_exportParameters.segyType == 0)
    {
        //trace len
        const QValidator *validator = ui->traceLenEdit->validator();
        int pos = 0;
        QString text = ui->traceLenEdit->text();
        if(validator->validate(text,pos) != QValidator::Acceptable)
        {
            QMessageBox::warning(this,"warning","Trace Len must be in 100~100000.");
            return;
        }
        m_exportParameters.traceNs = ui->traceLenEdit->text().toInt();
        m_exportParameters.ds      = ui->dsSpx->value();

        //shotlineFiles
        if(m_shotLineDlg->shotLineFiles().size()<1)
        {
            QMessageBox::warning(this,"warning","Need Select ShotLine Files.");
            return;
        }
        m_exportParameters.shotLineFiles = m_shotLineDlg->shotLineFiles();

        //text header
        m_exportParameters.textHeader = ui->textEdit->toPlainText();
    }

    //作业范围
    m_exportParameters.lineScope.first  = ui->fromLineSpx->value();
    m_exportParameters.lineScope.second = ui->toLineSpx->value();

    m_exportParameters.staScope.first  = ui->fromStaSpx->value();
    m_exportParameters.staScope.second = ui->toStaSpx->value();

    this->close();

    //start
    emit signalStartExport(m_exportParameters);
}
