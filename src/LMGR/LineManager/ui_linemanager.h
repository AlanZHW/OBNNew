/********************************************************************************
** Form generated from reading UI file 'linemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEMANAGER_H
#define UI_LINEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LineManager
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LineManager)
    {
        if (LineManager->objectName().isEmpty())
            LineManager->setObjectName(QStringLiteral("LineManager"));
        LineManager->resize(833, 467);
        centralWidget = new QWidget(LineManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 30, 831, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        LineManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LineManager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 833, 26));
        LineManager->setMenuBar(menuBar);
        statusBar = new QStatusBar(LineManager);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LineManager->setStatusBar(statusBar);

        retranslateUi(LineManager);

        QMetaObject::connectSlotsByName(LineManager);
    } // setupUi

    void retranslateUi(QMainWindow *LineManager)
    {
        LineManager->setWindowTitle(QApplication::translate("LineManager", "LineManager", 0));
    } // retranslateUi

};

namespace Ui {
    class LineManager: public Ui_LineManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEMANAGER_H
