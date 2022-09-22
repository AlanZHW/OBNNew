/********************************************************************************
** Form generated from reading UI file 'plotparamdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTPARAMDLG_H
#define UI_PLOTPARAMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotParamDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *WTVArBtn;
    QRadioButton *WTrBtn;
    QRadioButton *VArBtn;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *positiveCbx;
    QCheckBox *negativeCbx;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *sincRBtn;
    QRadioButton *linearRbtn;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QComboBox *ScaleScopeCbx;
    QLabel *label_5;
    QLineEdit *gainEdit;
    QLabel *label_7;
    QSpinBox *traceIncSpx;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *horiAxesLbl;
    QLabel *label_2;
    QComboBox *vertAxesLbl;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpinBox *horiAxesMinLenEdit;
    QLabel *label_4;
    QSpinBox *vertAxesMinLenEdit;
    QCheckBox *showHoriGridCbx;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *startTimeEdit;
    QLabel *label_9;
    QLineEdit *endTimeEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *PlotParamDlg)
    {
        if (PlotParamDlg->objectName().isEmpty())
            PlotParamDlg->setObjectName(QStringLiteral("PlotParamDlg"));
        PlotParamDlg->resize(377, 420);
        verticalLayout_4 = new QVBoxLayout(PlotParamDlg);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(PlotParamDlg);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        WTVArBtn = new QRadioButton(groupBox);
        WTVArBtn->setObjectName(QStringLiteral("WTVArBtn"));

        horizontalLayout_2->addWidget(WTVArBtn);

        WTrBtn = new QRadioButton(groupBox);
        WTrBtn->setObjectName(QStringLiteral("WTrBtn"));

        horizontalLayout_2->addWidget(WTrBtn);

        VArBtn = new QRadioButton(groupBox);
        VArBtn->setObjectName(QStringLiteral("VArBtn"));

        horizontalLayout_2->addWidget(VArBtn);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        positiveCbx = new QCheckBox(groupBox_4);
        positiveCbx->setObjectName(QStringLiteral("positiveCbx"));

        horizontalLayout_5->addWidget(positiveCbx);

        negativeCbx = new QCheckBox(groupBox_4);
        negativeCbx->setObjectName(QStringLiteral("negativeCbx"));

        horizontalLayout_5->addWidget(negativeCbx);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sincRBtn = new QRadioButton(groupBox_5);
        sincRBtn->setObjectName(QStringLiteral("sincRBtn"));

        horizontalLayout_4->addWidget(sincRBtn);

        linearRbtn = new QRadioButton(groupBox_5);
        linearRbtn->setObjectName(QStringLiteral("linearRbtn"));

        horizontalLayout_4->addWidget(linearRbtn);


        verticalLayout_2->addWidget(groupBox_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        ScaleScopeCbx = new QComboBox(tab);
        ScaleScopeCbx->setObjectName(QStringLiteral("ScaleScopeCbx"));

        gridLayout_3->addWidget(ScaleScopeCbx, 0, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        gainEdit = new QLineEdit(tab);
        gainEdit->setObjectName(QStringLiteral("gainEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gainEdit->sizePolicy().hasHeightForWidth());
        gainEdit->setSizePolicy(sizePolicy1);
        gainEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(gainEdit, 1, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        traceIncSpx = new QSpinBox(tab);
        traceIncSpx->setObjectName(QStringLiteral("traceIncSpx"));

        gridLayout_3->addWidget(traceIncSpx, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horiAxesLbl = new QComboBox(groupBox_2);
        horiAxesLbl->setObjectName(QStringLiteral("horiAxesLbl"));

        gridLayout->addWidget(horiAxesLbl, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        vertAxesLbl = new QComboBox(groupBox_2);
        vertAxesLbl->setObjectName(QStringLiteral("vertAxesLbl"));

        gridLayout->addWidget(vertAxesLbl, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horiAxesMinLenEdit = new QSpinBox(groupBox_3);
        horiAxesMinLenEdit->setObjectName(QStringLiteral("horiAxesMinLenEdit"));

        gridLayout_2->addWidget(horiAxesMinLenEdit, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        vertAxesMinLenEdit = new QSpinBox(groupBox_3);
        vertAxesMinLenEdit->setObjectName(QStringLiteral("vertAxesMinLenEdit"));

        gridLayout_2->addWidget(vertAxesMinLenEdit, 1, 1, 1, 1);

        showHoriGridCbx = new QCheckBox(groupBox_3);
        showHoriGridCbx->setObjectName(QStringLiteral("showHoriGridCbx"));
        showHoriGridCbx->setChecked(true);
        showHoriGridCbx->setTristate(false);

        gridLayout_2->addWidget(showHoriGridCbx, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(9, 0, 9, 0);
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        startTimeEdit = new QLineEdit(groupBox_6);
        startTimeEdit->setObjectName(QStringLiteral("startTimeEdit"));

        gridLayout_4->addWidget(startTimeEdit, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        endTimeEdit = new QLineEdit(groupBox_6);
        endTimeEdit->setObjectName(QStringLiteral("endTimeEdit"));

        gridLayout_4->addWidget(endTimeEdit, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okBtn = new QPushButton(PlotParamDlg);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout->addWidget(okBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(PlotParamDlg);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PlotParamDlg);
    } // setupUi

    void retranslateUi(QDialog *PlotParamDlg)
    {
        PlotParamDlg->setWindowTitle(QApplication::translate("PlotParamDlg", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("PlotParamDlg", "Wiggle Mode", 0));
        WTVArBtn->setText(QApplication::translate("PlotParamDlg", "WTVA", 0));
        WTrBtn->setText(QApplication::translate("PlotParamDlg", "WT", 0));
        VArBtn->setText(QApplication::translate("PlotParamDlg", "VA", 0));
        groupBox_4->setTitle(QApplication::translate("PlotParamDlg", "VA Brush Polarity", 0));
        positiveCbx->setText(QApplication::translate("PlotParamDlg", "Positive", 0));
        negativeCbx->setText(QApplication::translate("PlotParamDlg", "Negative", 0));
        groupBox_5->setTitle(QApplication::translate("PlotParamDlg", "Interpolation Type", 0));
        sincRBtn->setText(QApplication::translate("PlotParamDlg", "Sinc", 0));
        linearRbtn->setText(QApplication::translate("PlotParamDlg", "Linear", 0));
        label_6->setText(QApplication::translate("PlotParamDlg", "Scale Scope:", 0));
        ScaleScopeCbx->clear();
        ScaleScopeCbx->insertItems(0, QStringList()
         << QApplication::translate("PlotParamDlg", "Global", 0)
         << QApplication::translate("PlotParamDlg", "Trace", 0)
        );
        label_5->setText(QApplication::translate("PlotParamDlg", "Gain:", 0));
        gainEdit->setText(QApplication::translate("PlotParamDlg", "1.0", 0));
        label_7->setText(QApplication::translate("PlotParamDlg", "Trace Inc:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PlotParamDlg", " &Display ", 0));
        groupBox_2->setTitle(QApplication::translate("PlotParamDlg", "Label Setting", 0));
        label->setText(QApplication::translate("PlotParamDlg", "Horizontal Axes Label", 0));
        label_2->setText(QApplication::translate("PlotParamDlg", "Vertical Axes Label", 0));
        vertAxesLbl->clear();
        vertAxesLbl->insertItems(0, QStringList()
         << QApplication::translate("PlotParamDlg", "Time(ms)", 0)
         << QApplication::translate("PlotParamDlg", "Depth(m)", 0)
        );
        groupBox_3->setTitle(QApplication::translate("PlotParamDlg", "Display Setting", 0));
        label_3->setText(QApplication::translate("PlotParamDlg", "Horizontal Axes MinLength", 0));
        label_4->setText(QApplication::translate("PlotParamDlg", "Vertical Axes MinLength", 0));
        showHoriGridCbx->setText(QApplication::translate("PlotParamDlg", "Show Horizontal GridLine", 0));
        groupBox_6->setTitle(QApplication::translate("PlotParamDlg", "Display Scope", 0));
        label_8->setText(QApplication::translate("PlotParamDlg", "Start Time(ms):", 0));
        startTimeEdit->setText(QApplication::translate("PlotParamDlg", "0", 0));
        label_9->setText(QApplication::translate("PlotParamDlg", "End Time(ms):", 0));
        endTimeEdit->setText(QApplication::translate("PlotParamDlg", "10000", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PlotParamDlg", " &Axes ", 0));
        okBtn->setText(QApplication::translate("PlotParamDlg", "&Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class PlotParamDlg: public Ui_PlotParamDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTPARAMDLG_H
