/********************************************************************************
** Form generated from reading UI file 'datamgrcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAMGRCONTROL_H
#define UI_DATAMGRCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataMgrControl
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *TimeError;
    QWidget *DataManager;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *mainSplitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QListWidget *jobList;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *autoRefreshCbx;
    QSpinBox *spinBox;
    QLabel *label_3;
    QPushButton *refreshBtn;
    QTextBrowser *logBrowser;
    QWidget *QCplot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataMgrControl)
    {
        if (DataMgrControl->objectName().isEmpty())
            DataMgrControl->setObjectName(QStringLiteral("DataMgrControl"));
        DataMgrControl->resize(1039, 721);
        centralWidget = new QWidget(DataMgrControl);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        TimeError = new QWidget();
        TimeError->setObjectName(QStringLiteral("TimeError"));
        tabWidget->addTab(TimeError, QString());
        DataManager = new QWidget();
        DataManager->setObjectName(QStringLiteral("DataManager"));
        horizontalLayout_4 = new QHBoxLayout(DataManager);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mainSplitter = new QSplitter(DataManager);
        mainSplitter->setObjectName(QStringLiteral("mainSplitter"));
        mainSplitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(mainSplitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        jobList = new QListWidget(layoutWidget);
        jobList->setObjectName(QStringLiteral("jobList"));

        verticalLayout->addWidget(jobList);

        mainSplitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(mainSplitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        autoRefreshCbx = new QCheckBox(layoutWidget1);
        autoRefreshCbx->setObjectName(QStringLiteral("autoRefreshCbx"));

        horizontalLayout_3->addWidget(autoRefreshCbx);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setMinimum(2);
        spinBox->setMaximum(30);
        spinBox->setValue(5);

        horizontalLayout_3->addWidget(spinBox);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        refreshBtn = new QPushButton(layoutWidget1);
        refreshBtn->setObjectName(QStringLiteral("refreshBtn"));

        horizontalLayout_3->addWidget(refreshBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);

        logBrowser = new QTextBrowser(layoutWidget1);
        logBrowser->setObjectName(QStringLiteral("logBrowser"));

        verticalLayout_2->addWidget(logBrowser);

        mainSplitter->addWidget(layoutWidget1);

        horizontalLayout_4->addWidget(mainSplitter);

        tabWidget->addTab(DataManager, QString());
        QCplot = new QWidget();
        QCplot->setObjectName(QStringLiteral("QCplot"));
        tabWidget->addTab(QCplot, QString());

        horizontalLayout->addWidget(tabWidget);

        DataMgrControl->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataMgrControl);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1039, 23));
        DataMgrControl->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DataMgrControl);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DataMgrControl->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DataMgrControl);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DataMgrControl->setStatusBar(statusBar);

        retranslateUi(DataMgrControl);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataMgrControl);
    } // setupUi

    void retranslateUi(QMainWindow *DataMgrControl)
    {
        DataMgrControl->setWindowTitle(QApplication::translate("DataMgrControl", "DataMgrControl", 0));
        tabWidget->setTabText(tabWidget->indexOf(TimeError), QApplication::translate("DataMgrControl", "HydroacousticTimeSingleAnalysis", 0));
        label->setText(QApplication::translate("DataMgrControl", "Job List:", 0));
        label_2->setText(QApplication::translate("DataMgrControl", "Job Log:", 0));
        autoRefreshCbx->setText(QApplication::translate("DataMgrControl", "Auto refresh:", 0));
        label_3->setText(QApplication::translate("DataMgrControl", "(sec)", 0));
        refreshBtn->setText(QApplication::translate("DataMgrControl", "&Refresh", 0));
        tabWidget->setTabText(tabWidget->indexOf(DataManager), QApplication::translate("DataMgrControl", "DataManager   ", 0));
        tabWidget->setTabText(tabWidget->indexOf(QCplot), QApplication::translate("DataMgrControl", "QCPlot   ", 0));
    } // retranslateUi

};

namespace Ui {
    class DataMgrControl: public Ui_DataMgrControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAMGRCONTROL_H
