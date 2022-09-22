/********************************************************************************
** Form generated from reading UI file 'opensegydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENSEGYDLG_H
#define UI_OPENSEGYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenSegyDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *OneComRbtn;
    QRadioButton *FourComRbtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fileNameEdit;
    QPushButton *brwserBtn;
    QWidget *FileExpandWg;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *fileNameEdit_2;
    QPushButton *brwserBtn_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *fileNameEdit_3;
    QPushButton *brwserBtn_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *fileNameEdit_4;
    QPushButton *brwserBtn_4;
    QFrame *line_2;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *nsEdit;
    QLabel *label_3;
    QLineEdit *sampleInterEdit;
    QLabel *label_4;
    QLineEdit *nTraceEdit;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *detailBtn;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QSpinBox *startTraceSpx;
    QSpinBox *maxShowTraceSpx;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *OpenSegyDlg)
    {
        if (OpenSegyDlg->objectName().isEmpty())
            OpenSegyDlg->setObjectName(QStringLiteral("OpenSegyDlg"));
        OpenSegyDlg->resize(448, 575);
        verticalLayout_4 = new QVBoxLayout(OpenSegyDlg);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_3 = new QGroupBox(OpenSegyDlg);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        OneComRbtn = new QRadioButton(groupBox_3);
        OneComRbtn->setObjectName(QStringLiteral("OneComRbtn"));
        OneComRbtn->setChecked(true);

        horizontalLayout_5->addWidget(OneComRbtn);

        FourComRbtn = new QRadioButton(groupBox_3);
        FourComRbtn->setObjectName(QStringLiteral("FourComRbtn"));

        horizontalLayout_5->addWidget(FourComRbtn);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fileNameEdit = new QLineEdit(groupBox_3);
        fileNameEdit->setObjectName(QStringLiteral("fileNameEdit"));

        horizontalLayout->addWidget(fileNameEdit);

        brwserBtn = new QPushButton(groupBox_3);
        brwserBtn->setObjectName(QStringLiteral("brwserBtn"));
        brwserBtn->setMaximumSize(QSize(36, 16777215));

        horizontalLayout->addWidget(brwserBtn);


        verticalLayout_3->addLayout(horizontalLayout);

        FileExpandWg = new QWidget(groupBox_3);
        FileExpandWg->setObjectName(QStringLiteral("FileExpandWg"));
        verticalLayout_2 = new QVBoxLayout(FileExpandWg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(FileExpandWg);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        fileNameEdit_2 = new QLineEdit(FileExpandWg);
        fileNameEdit_2->setObjectName(QStringLiteral("fileNameEdit_2"));

        horizontalLayout_6->addWidget(fileNameEdit_2);

        brwserBtn_2 = new QPushButton(FileExpandWg);
        brwserBtn_2->setObjectName(QStringLiteral("brwserBtn_2"));
        brwserBtn_2->setMaximumSize(QSize(36, 16777215));

        horizontalLayout_6->addWidget(brwserBtn_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(FileExpandWg);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        fileNameEdit_3 = new QLineEdit(FileExpandWg);
        fileNameEdit_3->setObjectName(QStringLiteral("fileNameEdit_3"));

        horizontalLayout_7->addWidget(fileNameEdit_3);

        brwserBtn_3 = new QPushButton(FileExpandWg);
        brwserBtn_3->setObjectName(QStringLiteral("brwserBtn_3"));
        brwserBtn_3->setMaximumSize(QSize(36, 16777215));

        horizontalLayout_7->addWidget(brwserBtn_3);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(FileExpandWg);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        fileNameEdit_4 = new QLineEdit(FileExpandWg);
        fileNameEdit_4->setObjectName(QStringLiteral("fileNameEdit_4"));

        horizontalLayout_8->addWidget(fileNameEdit_4);

        brwserBtn_4 = new QPushButton(FileExpandWg);
        brwserBtn_4->setObjectName(QStringLiteral("brwserBtn_4"));
        brwserBtn_4->setMaximumSize(QSize(36, 16777215));

        horizontalLayout_8->addWidget(brwserBtn_4);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_3->addWidget(FileExpandWg);


        verticalLayout_4->addWidget(groupBox_3);

        line_2 = new QFrame(OpenSegyDlg);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        mainFrame = new QFrame(OpenSegyDlg);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::Box);
        mainFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(mainFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(mainFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        nsEdit = new QLineEdit(groupBox);
        nsEdit->setObjectName(QStringLiteral("nsEdit"));
        nsEdit->setReadOnly(true);

        gridLayout->addWidget(nsEdit, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        sampleInterEdit = new QLineEdit(groupBox);
        sampleInterEdit->setObjectName(QStringLiteral("sampleInterEdit"));
        sampleInterEdit->setReadOnly(true);

        gridLayout->addWidget(sampleInterEdit, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        nTraceEdit = new QLineEdit(groupBox);
        nTraceEdit->setObjectName(QStringLiteral("nTraceEdit"));
        nTraceEdit->setReadOnly(true);

        gridLayout->addWidget(nTraceEdit, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        detailBtn = new QPushButton(groupBox);
        detailBtn->setObjectName(QStringLiteral("detailBtn"));

        horizontalLayout_2->addWidget(detailBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        line = new QFrame(mainFrame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBox_2 = new QGroupBox(mainFrame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 2, 1);

        startTraceSpx = new QSpinBox(groupBox_2);
        startTraceSpx->setObjectName(QStringLiteral("startTraceSpx"));

        gridLayout_2->addWidget(startTraceSpx, 0, 1, 1, 1);

        maxShowTraceSpx = new QSpinBox(groupBox_2);
        maxShowTraceSpx->setObjectName(QStringLiteral("maxShowTraceSpx"));

        gridLayout_2->addWidget(maxShowTraceSpx, 1, 1, 2, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_4->addWidget(mainFrame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        okBtn = new QPushButton(OpenSegyDlg);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout_4->addWidget(okBtn);

        cancelBtn = new QPushButton(OpenSegyDlg);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout_4->addWidget(cancelBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(OpenSegyDlg);

        QMetaObject::connectSlotsByName(OpenSegyDlg);
    } // setupUi

    void retranslateUi(QDialog *OpenSegyDlg)
    {
        OpenSegyDlg->setWindowTitle(QApplication::translate("OpenSegyDlg", "Dialog", 0));
        groupBox_3->setTitle(QApplication::translate("OpenSegyDlg", "Open File", 0));
        OneComRbtn->setText(QApplication::translate("OpenSegyDlg", "One Component", 0));
        FourComRbtn->setText(QApplication::translate("OpenSegyDlg", "Four Component", 0));
        label->setText(QApplication::translate("OpenSegyDlg", "File(bhx):", 0));
        brwserBtn->setText(QApplication::translate("OpenSegyDlg", "...", 0));
        label_7->setText(QApplication::translate("OpenSegyDlg", "File(bhy):", 0));
        brwserBtn_2->setText(QApplication::translate("OpenSegyDlg", "...", 0));
        label_8->setText(QApplication::translate("OpenSegyDlg", "File(bhz):", 0));
        brwserBtn_3->setText(QApplication::translate("OpenSegyDlg", "...", 0));
        label_9->setText(QApplication::translate("OpenSegyDlg", "File(hyd):", 0));
        brwserBtn_4->setText(QApplication::translate("OpenSegyDlg", "...", 0));
        groupBox->setTitle(QApplication::translate("OpenSegyDlg", "Trace Header Information", 0));
        label_2->setText(QApplication::translate("OpenSegyDlg", "Number of Data Samples:", 0));
        label_3->setText(QApplication::translate("OpenSegyDlg", "Sample Interval(us):", 0));
        label_4->setText(QApplication::translate("OpenSegyDlg", "Number of Trace:", 0));
        label_5->setText(QApplication::translate("OpenSegyDlg", "Trace Header Details", 0));
        detailBtn->setText(QApplication::translate("OpenSegyDlg", "&Detail", 0));
        groupBox_2->setTitle(QApplication::translate("OpenSegyDlg", "All Entry", 0));
        label_10->setText(QApplication::translate("OpenSegyDlg", "Start Trace No:", 0));
        label_6->setText(QApplication::translate("OpenSegyDlg", "Max Traces(Per Component) Per Screen:", 0));
        okBtn->setText(QApplication::translate("OpenSegyDlg", "&Ok", 0));
        cancelBtn->setText(QApplication::translate("OpenSegyDlg", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenSegyDlg: public Ui_OpenSegyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENSEGYDLG_H
