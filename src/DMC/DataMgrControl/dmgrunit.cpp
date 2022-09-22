#include "dmgrunit.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QToolButton>
#include <QAction>
#include <QListWidget>

#include "datamgrcontrol.h"
#include "gsegy.h"

//menuManager
MenuManager::MenuManager(QObject *parent)
    :QObject(parent)
{
}

void MenuManager::createMenu(DataMgrControl *dataMgrControl,QMenuBar *menuBar)
{
    //菜单
    fileMenu = new QMenu("File",menuBar);
    fileMenu->addAction(tr("&Export Seg-Y Data"),dataMgrControl,SLOT(slotNewSegyData()), QKeySequence(tr("Ctrl+E")));
    fileMenu->addAction(tr("&Open Seg-Y File"),  dataMgrControl,SLOT(slotOpenSegyFile()),QKeySequence(tr("Ctrl+O")));
    fileMenu->addAction(tr("&Exit"),             dataMgrControl,SLOT(slotExit()),        QKeySequence(tr("Ctrl+Q")));
    menuBar->addMenu(fileMenu);

    //tools
    toolsMenu = new QMenu(tr("Tools"),menuBar);
    toolsMenu->addAction(tr("Display Option"),dataMgrControl,SLOT(slotDisplayOption()));

    menuBar->addMenu(toolsMenu);

    //其他菜单扩展
    //...
    helpMenu = new QMenu(tr("Help"));
    helpMenu->addAction(tr("Help"),dataMgrControl,SLOT(slotAbout()));
    menuBar->addMenu(helpMenu);
}

//toolManager
ToolManager::ToolManager(QObject *parent)
    :QObject(parent)
{

}

void ToolManager::createTools(DataMgrControl *dataMgrControl,QToolBar *toolBar)
{
    QString m_Path = QApplication::applicationDirPath()+"/..";
    toolBar->setIconSize(QSize(24,24));
    //open segy file
    toolBar->addAction(QIcon(m_Path+ICON_OPEN_FILE),"Open Segy File",dataMgrControl,SLOT(slotOpenSegyFile()));
    toolBar->addSeparator();

    //前后播放，跳转到某一道集
    toolBar->addAction(QIcon(m_Path+ICON_PREVIOUS),"Previous Gather",dataMgrControl,SLOT(slotPreviousGather()));
    toolBar->addAction(QIcon(m_Path+ICON_NEXT),"Next Gather",dataMgrControl,SLOT(slotNextGather()));
    toolBar->addAction(QIcon(m_Path+ICON_MOVE_TO),"Move To Gather",dataMgrControl,SLOT(slotMoveToGather()));
    toolBar->addSeparator();

    //zoom In 缩放
    m_zoomInBtn = new DownToolButton(toolBar);
    m_zoomInBtn->setText("Zoom In");
    m_zoomInBtn->setToolTip("Zoom In");
    m_zoomInBtn->setIcon(QIcon(m_Path+ICON_ZOOM_IN));

    connect(m_zoomInBtn,SIGNAL(btnTriggerDowned(bool)), this,SLOT(slotZoomIn(bool)));
    connect(this,SIGNAL(signalZoomInEnable(bool)),dataMgrControl,SLOT(slotZoomIn(bool)));
    toolBar->addWidget(m_zoomInBtn);

    QToolButton *zoomOutBtn = new QToolButton(toolBar);
    zoomOutBtn->setText("Zoom Out");
    zoomOutBtn->setToolTip("Zoom Out");
    zoomOutBtn->setIcon(QIcon(m_Path+ICON_ZOOM_OUT_FULL));
    connect(zoomOutBtn,SIGNAL(clicked()),dataMgrControl,SLOT(slotZoomOut()));
    toolBar->addWidget(zoomOutBtn);

    toolBar->addSeparator();

    //trace header
    m_traceInfBtn = new DownToolButton(toolBar);
    m_traceInfBtn->setText("Trace Information");
    m_traceInfBtn->setIcon(QIcon(m_Path+ICON_INFORMATION));
    toolBar->addWidget(m_traceInfBtn);
    m_traceInfBtn->setToolTip("Trace Header Information");
    connect(m_traceInfBtn,SIGNAL(btnTriggerDowned(bool)),this,SLOT(slotTraceInformation(bool)));
    connect(this,SIGNAL(signalTraceInformEnable(bool)),dataMgrControl,SLOT(slotTraceInform(bool)));

    //display option
    toolBar->addAction(QIcon(m_Path+ICON_SETTINGS),"Display Option",dataMgrControl,SLOT(slotDisplayOption()));
}

void ToolManager::slotZoomIn(bool enable)
{
    bool zoomEnable = enable;
    if(zoomEnable)
        m_traceInfBtn->setBtnDown(false);
    emit signalZoomInEnable(zoomEnable);
}

void ToolManager::slotTraceInformation(bool enable)
{
    bool traceInforEnable = enable;
    if(traceInforEnable)
        m_zoomInBtn->setBtnDown(false);
    emit signalTraceInformEnable(traceInforEnable);
}






