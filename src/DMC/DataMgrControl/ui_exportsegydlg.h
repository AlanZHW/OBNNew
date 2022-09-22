/********************************************************************************
** Form generated from reading UI file 'exportsegydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSEGYDLG_H
#define UI_EXPORTSEGYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportSegyDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *recvRbtn;
    QRadioButton *shotRbtn;
    QFrame *line;
    QFrame *textHeaderFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *jobEdit;
    QLabel *label;
    QComboBox *areasCbx;
    QLabel *dataPathLbl;
    QLineEdit *dataPathEdit;
    QPushButton *dataPathBrwser;
    QLabel *label_4;
    QLineEdit *outputFilePathEdit;
    QPushButton *outputPathBrwser;
    QGroupBox *gatherInfoGbx;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QPushButton *ShotLineBrwser;
    QLabel *label_6;
    QLineEdit *traceLenEdit;
    QLabel *label_9;
    QSpinBox *dsSpx;
    QGroupBox *ScopeGbx;
    QGridLayout *gridLayout_2;
    QSpinBox *toStaSpx;
    QLabel *stationLbl;
    QLabel *lineLbl;
    QFrame *line_3;
    QSpinBox *toLineSpx;
    QSpinBox *fromStaSpx;
    QSpinBox *fromLineSpx;
    QFrame *line_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *startBtn;
    QPushButton *CloseBtn;

    void setupUi(QDialog *ExportSegyDlg)
    {
        if (ExportSegyDlg->objectName().isEmpty())
            ExportSegyDlg->setObjectName(QStringLiteral("ExportSegyDlg"));
        ExportSegyDlg->resize(485, 643);
        verticalLayout_2 = new QVBoxLayout(ExportSegyDlg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(ExportSegyDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, -1, 2, -1);
        recvRbtn = new QRadioButton(groupBox);
        recvRbtn->setObjectName(QStringLiteral("recvRbtn"));
        recvRbtn->setChecked(true);

        horizontalLayout_2->addWidget(recvRbtn);

        shotRbtn = new QRadioButton(groupBox);
        shotRbtn->setObjectName(QStringLiteral("shotRbtn"));
        shotRbtn->setEnabled(true);
        shotRbtn->setChecked(false);

        horizontalLayout_2->addWidget(shotRbtn);


        verticalLayout_2->addWidget(groupBox);

        line = new QFrame(ExportSegyDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        textHeaderFrame = new QFrame(ExportSegyDlg);
        textHeaderFrame->setObjectName(QStringLiteral("textHeaderFrame"));
        textHeaderFrame->setFrameShape(QFrame::StyledPanel);
        textHeaderFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(textHeaderFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(textHeaderFrame);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        textEdit = new QTextEdit(textHeaderFrame);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addWidget(textHeaderFrame);

        groupBox_2 = new QGroupBox(ExportSegyDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        jobEdit = new QLineEdit(groupBox_2);
        jobEdit->setObjectName(QStringLiteral("jobEdit"));

        gridLayout->addWidget(jobEdit, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        areasCbx = new QComboBox(groupBox_2);
        areasCbx->setObjectName(QStringLiteral("areasCbx"));

        gridLayout->addWidget(areasCbx, 1, 1, 1, 1);

        dataPathLbl = new QLabel(groupBox_2);
        dataPathLbl->setObjectName(QStringLiteral("dataPathLbl"));

        gridLayout->addWidget(dataPathLbl, 2, 0, 1, 1);

        dataPathEdit = new QLineEdit(groupBox_2);
        dataPathEdit->setObjectName(QStringLiteral("dataPathEdit"));

        gridLayout->addWidget(dataPathEdit, 2, 1, 1, 1);

        dataPathBrwser = new QPushButton(groupBox_2);
        dataPathBrwser->setObjectName(QStringLiteral("dataPathBrwser"));
        dataPathBrwser->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(dataPathBrwser, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        outputFilePathEdit = new QLineEdit(groupBox_2);
        outputFilePathEdit->setObjectName(QStringLiteral("outputFilePathEdit"));

        gridLayout->addWidget(outputFilePathEdit, 3, 1, 1, 1);

        outputPathBrwser = new QPushButton(groupBox_2);
        outputPathBrwser->setObjectName(QStringLiteral("outputPathBrwser"));
        outputPathBrwser->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(outputPathBrwser, 3, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        gatherInfoGbx = new QGroupBox(ExportSegyDlg);
        gatherInfoGbx->setObjectName(QStringLiteral("gatherInfoGbx"));
        gridLayout_3 = new QGridLayout(gatherInfoGbx);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(gatherInfoGbx);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        ShotLineBrwser = new QPushButton(gatherInfoGbx);
        ShotLineBrwser->setObjectName(QStringLiteral("ShotLineBrwser"));
        ShotLineBrwser->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(ShotLineBrwser, 0, 1, 1, 1);

        label_6 = new QLabel(gatherInfoGbx);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        traceLenEdit = new QLineEdit(gatherInfoGbx);
        traceLenEdit->setObjectName(QStringLiteral("traceLenEdit"));

        gridLayout_3->addWidget(traceLenEdit, 1, 1, 1, 1);

        label_9 = new QLabel(gatherInfoGbx);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        dsSpx = new QSpinBox(gatherInfoGbx);
        dsSpx->setObjectName(QStringLiteral("dsSpx"));
        dsSpx->setMaximumSize(QSize(64, 16777215));
        dsSpx->setMinimum(1);
        dsSpx->setMaximum(10);

        gridLayout_3->addWidget(dsSpx, 2, 1, 1, 1);


        verticalLayout_2->addWidget(gatherInfoGbx);

        ScopeGbx = new QGroupBox(ExportSegyDlg);
        ScopeGbx->setObjectName(QStringLiteral("ScopeGbx"));
        gridLayout_2 = new QGridLayout(ScopeGbx);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toStaSpx = new QSpinBox(ScopeGbx);
        toStaSpx->setObjectName(QStringLiteral("toStaSpx"));

        gridLayout_2->addWidget(toStaSpx, 1, 3, 1, 1);

        stationLbl = new QLabel(ScopeGbx);
        stationLbl->setObjectName(QStringLiteral("stationLbl"));

        gridLayout_2->addWidget(stationLbl, 1, 0, 1, 1);

        lineLbl = new QLabel(ScopeGbx);
        lineLbl->setObjectName(QStringLiteral("lineLbl"));

        gridLayout_2->addWidget(lineLbl, 0, 0, 1, 1);

        line_3 = new QFrame(ScopeGbx);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setMaximumSize(QSize(36, 16777215));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setMidLineWidth(1);
        line_3->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line_3, 0, 2, 1, 1);

        toLineSpx = new QSpinBox(ScopeGbx);
        toLineSpx->setObjectName(QStringLiteral("toLineSpx"));
        toLineSpx->setMaximumSize(QSize(64, 16777215));

        gridLayout_2->addWidget(toLineSpx, 0, 3, 1, 1);

        fromStaSpx = new QSpinBox(ScopeGbx);
        fromStaSpx->setObjectName(QStringLiteral("fromStaSpx"));

        gridLayout_2->addWidget(fromStaSpx, 1, 1, 1, 1);

        fromLineSpx = new QSpinBox(ScopeGbx);
        fromLineSpx->setObjectName(QStringLiteral("fromLineSpx"));
        fromLineSpx->setMaximumSize(QSize(64, 16777215));

        gridLayout_2->addWidget(fromLineSpx, 0, 1, 1, 1);

        line_4 = new QFrame(ScopeGbx);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setMaximumSize(QSize(36, 16777215));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setMidLineWidth(1);
        line_4->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line_4, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        verticalLayout_2->addWidget(ScopeGbx);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        line_2 = new QFrame(ExportSegyDlg);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startBtn = new QPushButton(ExportSegyDlg);
        startBtn->setObjectName(QStringLiteral("startBtn"));

        horizontalLayout->addWidget(startBtn);

        CloseBtn = new QPushButton(ExportSegyDlg);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));

        horizontalLayout->addWidget(CloseBtn);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ExportSegyDlg);

        QMetaObject::connectSlotsByName(ExportSegyDlg);
    } // setupUi

    void retranslateUi(QDialog *ExportSegyDlg)
    {
        ExportSegyDlg->setWindowTitle(QApplication::translate("ExportSegyDlg", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("ExportSegyDlg", "Reciever/Shot Oriented", 0));
        recvRbtn->setText(QApplication::translate("ExportSegyDlg", "Reciever Oriented", 0));
        shotRbtn->setText(QApplication::translate("ExportSegyDlg", "Shot Oriented(From RecvGather)", 0));
        label_7->setText(QApplication::translate("ExportSegyDlg", "Segy Text Header(0~3200B , Alternative ):", 0));
        textEdit->setPlaceholderText(QApplication::translate("ExportSegyDlg", "Input Segy text Header ...", 0));
        groupBox_2->setTitle(QApplication::translate("ExportSegyDlg", "Basic Parameter:", 0));
        label_3->setText(QApplication::translate("ExportSegyDlg", "JobName:", 0));
        jobEdit->setText(QApplication::translate("ExportSegyDlg", "job", 0));
        label->setText(QApplication::translate("ExportSegyDlg", "Area:", 0));
        dataPathLbl->setText(QApplication::translate("ExportSegyDlg", "Origin Data Path:", 0));
#ifndef QT_NO_TOOLTIP
        dataPathEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        dataPathBrwser->setText(QApplication::translate("ExportSegyDlg", "...", 0));
        label_4->setText(QApplication::translate("ExportSegyDlg", "Output File Path:", 0));
        outputPathBrwser->setText(QApplication::translate("ExportSegyDlg", "...", 0));
        gatherInfoGbx->setTitle(QApplication::translate("ExportSegyDlg", "Gather Info:", 0));
        label_5->setText(QApplication::translate("ExportSegyDlg", "ShotLine Files:", 0));
        ShotLineBrwser->setText(QApplication::translate("ExportSegyDlg", "&Select", 0));
        label_6->setText(QApplication::translate("ExportSegyDlg", "Rercord Trace Len(ns):", 0));
        traceLenEdit->setText(QApplication::translate("ExportSegyDlg", "10000", 0));
        label_9->setText(QApplication::translate("ExportSegyDlg", "Sample Interval(ds:ms):", 0));
        ScopeGbx->setTitle(QApplication::translate("ExportSegyDlg", "Reciever Scope:", 0));
        stationLbl->setText(QApplication::translate("ExportSegyDlg", "Reciever Station:", 0));
        lineLbl->setText(QApplication::translate("ExportSegyDlg", "Reciever Line :", 0));
        startBtn->setText(QApplication::translate("ExportSegyDlg", "&Start Exporting", 0));
        CloseBtn->setText(QApplication::translate("ExportSegyDlg", "&Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportSegyDlg: public Ui_ExportSegyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSEGYDLG_H
