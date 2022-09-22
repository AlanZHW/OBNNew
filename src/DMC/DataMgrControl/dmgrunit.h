#ifndef DMGRUNIT_H
#define DMGRUNIT_H

#include <QtWidgets/QWidget>
#include <QDialog>
#include <QButtonGroup>
#include <QTextBrowser>
#include <QTableWidget>
#include <QSpinBox>
#include <QApplication>

#include "gpublic.h"
#include "gpublicwidgets.h"
#include "gcore.h"
#include "qcplotter.h"

#include "opensegydlg.h"

class DataMgrControl;
class QToolBar;
class QToolButton;
class QMenuBar;
class QMenu;

class MenuManager : public QObject
{
    Q_OBJECT
public:
    MenuManager(QObject *parent = 0);

    void createMenu(DataMgrControl *,QMenuBar *bar);

private:
    QMenu   *fileMenu,*toolsMenu,*helpMenu;
};

class ToolManager : public QObject
{
    Q_OBJECT
public:
    ToolManager(QObject *parent = 0);
    void createTools(DataMgrControl *,QToolBar *toolBar);

signals:
    void signalZoomInEnable(const bool &enable);
    void signalTraceInformEnable(const bool &en);

private slots:
    void slotZoomIn(bool );
    void slotTraceInformation(bool);

private:
    DownToolButton *m_zoomInBtn;
    DownToolButton *m_traceInfBtn;
};


#endif // DMGRUNIT_H
