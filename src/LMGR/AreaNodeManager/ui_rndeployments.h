/********************************************************************************
** Form generated from reading UI file 'rndeployments.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RNDEPLOYMENTS_H
#define UI_RNDEPLOYMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_RNDeployments
{
public:
    QFrame *line;
    QPushButton *refreshBtn;
    QPushButton *closeBtn;
    QFrame *frame;
    QTableWidget *tableWidget;
    QToolButton *editDepoyTimeBtn;
    QToolButton *editPickupTimeBtn;
    QToolButton *editCoordBtn;
    QToolButton *deleteDepolysBtn;
    QPushButton *importDepolyBtn;
    QPushButton *exportSheetBtn;

    void setupUi(QDialog *RNDeployments)
    {
        if (RNDeployments->objectName().isEmpty())
            RNDeployments->setObjectName(QStringLiteral("RNDeployments"));
        RNDeployments->resize(1241, 596);
        line = new QFrame(RNDeployments);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 540, 1201, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        refreshBtn = new QPushButton(RNDeployments);
        refreshBtn->setObjectName(QStringLiteral("refreshBtn"));
        refreshBtn->setGeometry(QRect(230, 560, 107, 28));
        closeBtn = new QPushButton(RNDeployments);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(770, 560, 107, 28));
        frame = new QFrame(RNDeployments);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 1221, 531));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 1091, 531));
        editDepoyTimeBtn = new QToolButton(frame);
        editDepoyTimeBtn->setObjectName(QStringLiteral("editDepoyTimeBtn"));
        editDepoyTimeBtn->setGeometry(QRect(1100, 20, 111, 51));
        editPickupTimeBtn = new QToolButton(frame);
        editPickupTimeBtn->setObjectName(QStringLiteral("editPickupTimeBtn"));
        editPickupTimeBtn->setGeometry(QRect(1100, 90, 111, 51));
        editCoordBtn = new QToolButton(frame);
        editCoordBtn->setObjectName(QStringLiteral("editCoordBtn"));
        editCoordBtn->setGeometry(QRect(1100, 180, 111, 51));
        deleteDepolysBtn = new QToolButton(frame);
        deleteDepolysBtn->setObjectName(QStringLiteral("deleteDepolysBtn"));
        deleteDepolysBtn->setGeometry(QRect(1100, 270, 111, 51));
        importDepolyBtn = new QPushButton(frame);
        importDepolyBtn->setObjectName(QStringLiteral("importDepolyBtn"));
        importDepolyBtn->setGeometry(QRect(1100, 340, 111, 51));
        exportSheetBtn = new QPushButton(frame);
        exportSheetBtn->setObjectName(QStringLiteral("exportSheetBtn"));
        exportSheetBtn->setGeometry(QRect(1100, 420, 111, 51));

        retranslateUi(RNDeployments);

        QMetaObject::connectSlotsByName(RNDeployments);
    } // setupUi

    void retranslateUi(QDialog *RNDeployments)
    {
        RNDeployments->setWindowTitle(QApplication::translate("RNDeployments", "Dialog", 0));
        refreshBtn->setText(QApplication::translate("RNDeployments", "&Refresh", 0));
        closeBtn->setText(QApplication::translate("RNDeployments", "&Close", 0));
        editDepoyTimeBtn->setText(QApplication::translate("RNDeployments", "&Edit Depoly\n"
"Time...", 0));
        editPickupTimeBtn->setText(QApplication::translate("RNDeployments", "&Edit Pickup\n"
"Time...", 0));
        editCoordBtn->setText(QApplication::translate("RNDeployments", "&Edit \n"
"X,Y,Z", 0));
        deleteDepolysBtn->setText(QApplication::translate("RNDeployments", "&Delete \n"
"Depolyments", 0));
        importDepolyBtn->setText(QApplication::translate("RNDeployments", "&Import\n"
" Depolyments", 0));
        exportSheetBtn->setText(QApplication::translate("RNDeployments", "&Export \n"
"Sheet", 0));
    } // retranslateUi

};

namespace Ui {
    class RNDeployments: public Ui_RNDeployments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RNDEPLOYMENTS_H
