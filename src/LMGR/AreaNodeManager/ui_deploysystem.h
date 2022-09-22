/********************************************************************************
** Form generated from reading UI file 'deploysystem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPLOYSYSTEM_H
#define UI_DEPLOYSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gpublicwidgets.h"

QT_BEGIN_NAMESPACE

class Ui_DeploySystem
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    IpAddrEdit *ipAddrEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *portEdit;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *areaCbx;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *workStatusCbx;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *ConCbx;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeBtn;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *addToAreaCbx;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *workStatusCbx2;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *deviceNoEdit;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line_2;
    QTextBrowser *textBrowser2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *addBtn;
    QPushButton *closeBtn2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DeploySystem)
    {
        if (DeploySystem->objectName().isEmpty())
            DeploySystem->setObjectName(QStringLiteral("DeploySystem"));
        DeploySystem->resize(428, 485);
        verticalLayout_2 = new QVBoxLayout(DeploySystem);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(DeploySystem);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ipAddrEdit = new IpAddrEdit(frame);
        ipAddrEdit->setObjectName(QStringLiteral("ipAddrEdit"));
        ipAddrEdit->setMaximumSize(QSize(180, 16777215));
        ipAddrEdit->setFrameShape(QFrame::StyledPanel);
        ipAddrEdit->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(ipAddrEdit, 1, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        portEdit = new QLineEdit(frame);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setReadOnly(false);

        gridLayout->addWidget(portEdit, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        gridLayout->setRowStretch(2, 1);

        verticalLayout->addWidget(frame);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        areaCbx = new QComboBox(tab);
        areaCbx->setObjectName(QStringLiteral("areaCbx"));

        horizontalLayout_4->addWidget(areaCbx);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        workStatusCbx = new QComboBox(tab);
        workStatusCbx->setObjectName(QStringLiteral("workStatusCbx"));

        horizontalLayout->addWidget(workStatusCbx);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ConCbx = new QCheckBox(tab);
        ConCbx->setObjectName(QStringLiteral("ConCbx"));

        horizontalLayout_2->addWidget(ConCbx);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        clearBtn = new QPushButton(tab);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        horizontalLayout_3->addWidget(clearBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        closeBtn = new QPushButton(tab);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_3->addWidget(closeBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        addToAreaCbx = new QComboBox(tab_2);
        addToAreaCbx->setObjectName(QStringLiteral("addToAreaCbx"));

        horizontalLayout_5->addWidget(addToAreaCbx);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        workStatusCbx2 = new QComboBox(tab_2);
        workStatusCbx2->setObjectName(QStringLiteral("workStatusCbx2"));

        horizontalLayout_6->addWidget(workStatusCbx2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        deviceNoEdit = new QLineEdit(tab_2);
        deviceNoEdit->setObjectName(QStringLiteral("deviceNoEdit"));

        horizontalLayout_7->addWidget(deviceNoEdit);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_7);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        textBrowser2 = new QTextBrowser(tab_2);
        textBrowser2->setObjectName(QStringLiteral("textBrowser2"));

        verticalLayout_3->addWidget(textBrowser2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_13);

        addBtn = new QPushButton(tab_2);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        horizontalLayout_9->addWidget(addBtn);

        closeBtn2 = new QPushButton(tab_2);
        closeBtn2->setObjectName(QStringLiteral("closeBtn2"));

        horizontalLayout_9->addWidget(closeBtn2);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_9->addWidget(pushButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(DeploySystem);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DeploySystem);
    } // setupUi

    void retranslateUi(QDialog *DeploySystem)
    {
        DeploySystem->setWindowTitle(QApplication::translate("DeploySystem", "Dialog", 0));
        label->setText(QApplication::translate("DeploySystem", "Label:", 0));
        lineEdit->setText(QApplication::translate("DeploySystem", "RFID", 0));
        label_2->setText(QApplication::translate("DeploySystem", "Host IP:", 0));
        label_3->setText(QApplication::translate("DeploySystem", "Port:", 0));
        portEdit->setText(QApplication::translate("DeploySystem", "6000", 0));
        label_5->setText(QApplication::translate("DeploySystem", "Current Area:", 0));
        label_4->setText(QApplication::translate("DeploySystem", "Nodes Status:", 0));
        workStatusCbx->clear();
        workStatusCbx->insertItems(0, QStringList()
         << QApplication::translate("DeploySystem", "Deployment", 0)
         << QApplication::translate("DeploySystem", "Pick Up", 0)
         << QApplication::translate("DeploySystem", "Both", 0)
        );
        ConCbx->setText(QApplication::translate("DeploySystem", "connect", 0));
        clearBtn->setText(QApplication::translate("DeploySystem", "Clear", 0));
        closeBtn->setText(QApplication::translate("DeploySystem", "Close", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DeploySystem", "  RFID  ", 0));
        label_6->setText(QApplication::translate("DeploySystem", "Add To Area:", 0));
        label_7->setText(QApplication::translate("DeploySystem", "Nodes Status:", 0));
        workStatusCbx2->clear();
        workStatusCbx2->insertItems(0, QStringList()
         << QApplication::translate("DeploySystem", "Deployment", 0)
         << QApplication::translate("DeploySystem", "Pick Up", 0)
         << QApplication::translate("DeploySystem", "Both", 0)
        );
        label_8->setText(QApplication::translate("DeploySystem", "Device No:", 0));
        addBtn->setText(QApplication::translate("DeploySystem", "&Add/Update", 0));
        closeBtn2->setText(QApplication::translate("DeploySystem", "&Close", 0));
        pushButton->setText(QApplication::translate("DeploySystem", "&Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DeploySystem", "Add Device Manually", 0));
    } // retranslateUi

};

namespace Ui {
    class DeploySystem: public Ui_DeploySystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPLOYSYSTEM_H
