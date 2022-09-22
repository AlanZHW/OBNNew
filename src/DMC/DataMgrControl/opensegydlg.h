#ifndef OPENSEGYDLG_H
#define OPENSEGYDLG_H

#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

#include "gpublic.h"
#include "gpublicwidgets.h"
#include "gcore.h"
#include "qcplotter.h"

#include "filedetaildlg.h"

namespace Ui {
class OpenSegyDlg;
}
class OpenSegyDlg : public QDialog
{
    Q_OBJECT
public:
    enum OpenFilesType
    {
        One_Component  = 1,
        Four_Component = 4
    };
    OpenSegyDlg(QWidget *parent = 0);
    ~OpenSegyDlg();

    int maxShowTraces() const {return m_maxShowTraces;}
    int components()const{return m_OpenFilesType;}
    int startTrace() const {return m_startTrace;}
signals:
    void signalOpenedFile(QList<SegyFileHandle *>);

private slots:
    void on_okBtn_clicked();

    void on_cancelBtn_clicked();

    void on_detailBtn_clicked();

    void on_OneComRbtn_clicked();

    void on_FourComRbtn_clicked();

    void slotBrwBtnClicked(int id);

private:
    bool openSegyFile(const QStringList &fileName);
    bool getFileList(QStringList &fileList);

private:
    Ui::OpenSegyDlg  *ui;
    OpenFilesType     m_OpenFilesType;
    QList<QLineEdit *>m_fileNameEdits;
    QList<SegyFileHandle *> m_segyFileHandles;

    //文件句柄
    int               m_maxShowTraces;
    int               m_startTrace;
    FileDetailDlg    *m_fileDetailDlg;

    QButtonGroup     *m_brwserBtnGrp;
    QString           m_currentPath; //保存当前数据文件目录，方便下次选择文件
};

#endif // OPENSEGYDLG_H
