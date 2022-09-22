#ifndef EXPORTSEGYDLG_H
#define EXPORTSEGYDLG_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QTextBrowser>
#include <QTableWidget>
#include <QFileDialog>

#include "gpublic.h"
#include "gpublicwidgets.h"
#include "gcore.h"
#include "qcplotter.h"

#include "shotlinedlg.h"
#include "exportsegydlg.h"

namespace Ui {
class ExportSegyDlg;
}

class ExportSegyDlg : public QDialog
{
    Q_OBJECT
public:
    ExportSegyDlg(QWidget *parent = 0);
    ~ExportSegyDlg();
    void setProjectInfo(const ProjectInfo &projInfo);

signals:
    void signalStartExport(const ExportSegyParameter &parameter);

private slots:
    void on_dataPathBrwser_clicked();

    void on_outputPathBrwser_clicked();

    //开始运行抽取道集
    void on_startBtn_clicked();

    void on_CloseBtn_clicked();

    void on_ShotLineBrwser_clicked();

    void on_areasCbx_currentIndexChanged(const QString &arg1);

    void on_recvRbtn_clicked(bool checked);

    void on_shotRbtn_clicked(bool checked);

    void on_fromLineSpx_valueChanged(int arg1);

    void on_toLineSpx_valueChanged(int arg1);

    void on_fromStaSpx_valueChanged(int arg1);

    void on_toStaSpx_valueChanged(int arg1);

private:
    //根据当前项目初始化
    void initByProject();
    void updateScopeInfo();

private:
    Ui::ExportSegyDlg  *ui;
    ProjectInfo         m_projInfo;
    ExportSegyParameter m_exportParameters;
    ShotLineDlg        *m_shotLineDlg;
    AreaDataInfo       *m_areaDataInfo;
};

#endif // EXPORTSEGYDLG_H
