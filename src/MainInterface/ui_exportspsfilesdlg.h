/********************************************************************************
** Form generated from reading UI file 'exportspsfilesdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSPSFILESDLG_H
#define UI_EXPORTSPSFILESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportSPSFilesDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *shotRbtn;
    QRadioButton *recvRbtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *InputLbl;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addFilesBtn;
    QListWidget *fileListWg;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *ExportSPSFilesDlg)
    {
        if (ExportSPSFilesDlg->objectName().isEmpty())
            ExportSPSFilesDlg->setObjectName(QStringLiteral("ExportSPSFilesDlg"));
        ExportSPSFilesDlg->resize(347, 430);
        verticalLayout = new QVBoxLayout(ExportSPSFilesDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        shotRbtn = new QRadioButton(ExportSPSFilesDlg);
        shotRbtn->setObjectName(QStringLiteral("shotRbtn"));
        shotRbtn->setChecked(true);

        horizontalLayout_3->addWidget(shotRbtn);

        recvRbtn = new QRadioButton(ExportSPSFilesDlg);
        recvRbtn->setObjectName(QStringLiteral("recvRbtn"));

        horizontalLayout_3->addWidget(recvRbtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        InputLbl = new QLabel(ExportSPSFilesDlg);
        InputLbl->setObjectName(QStringLiteral("InputLbl"));

        horizontalLayout_2->addWidget(InputLbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addFilesBtn = new QPushButton(ExportSPSFilesDlg);
        addFilesBtn->setObjectName(QStringLiteral("addFilesBtn"));

        horizontalLayout_2->addWidget(addFilesBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        fileListWg = new QListWidget(ExportSPSFilesDlg);
        fileListWg->setObjectName(QStringLiteral("fileListWg"));

        verticalLayout->addWidget(fileListWg);

        line = new QFrame(ExportSPSFilesDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exportBtn = new QPushButton(ExportSPSFilesDlg);
        exportBtn->setObjectName(QStringLiteral("exportBtn"));

        horizontalLayout->addWidget(exportBtn);

        closeBtn = new QPushButton(ExportSPSFilesDlg);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExportSPSFilesDlg);

        QMetaObject::connectSlotsByName(ExportSPSFilesDlg);
    } // setupUi

    void retranslateUi(QDialog *ExportSPSFilesDlg)
    {
        ExportSPSFilesDlg->setWindowTitle(QApplication::translate("ExportSPSFilesDlg", "Dialog", 0));
        shotRbtn->setText(QApplication::translate("ExportSPSFilesDlg", ".S(Shot) File", 0));
        recvRbtn->setText(QApplication::translate("ExportSPSFilesDlg", ".R(Reciever) File", 0));
        InputLbl->setText(QApplication::translate("ExportSPSFilesDlg", "Input ShotLine Files:", 0));
        addFilesBtn->setText(QApplication::translate("ExportSPSFilesDlg", "&Add Files", 0));
        exportBtn->setText(QApplication::translate("ExportSPSFilesDlg", "&Export", 0));
        closeBtn->setText(QApplication::translate("ExportSPSFilesDlg", "&Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportSPSFilesDlg: public Ui_ExportSPSFilesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSPSFILESDLG_H
