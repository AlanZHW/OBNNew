/********************************************************************************
** Form generated from reading UI file 'assignnodedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNNODEDLG_H
#define UI_ASSIGNNODEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AssignNodeDlg
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *areaCbx;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *updateDev;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QLineEdit *filterEdit;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QTableWidget *RNTable;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *nodeCount;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *selectedCount;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *assignBtn;
    QPushButton *unassignBtn;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *lineCbx;
    QTableWidget *currentDepolyTable;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *assignedCount;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *unassignedCount;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *moveUpBtn;
    QPushButton *moveDownBtn;
    QSpacerItem *verticalSpacer_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okBtn;
    QPushButton *applyBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *AssignNodeDlg)
    {
        if (AssignNodeDlg->objectName().isEmpty())
            AssignNodeDlg->setObjectName(QStringLiteral("AssignNodeDlg"));
        AssignNodeDlg->resize(653, 583);
        verticalLayout_6 = new QVBoxLayout(AssignNodeDlg);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(AssignNodeDlg);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        areaCbx = new QComboBox(AssignNodeDlg);
        areaCbx->setObjectName(QStringLiteral("areaCbx"));

        horizontalLayout_7->addWidget(areaCbx);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        updateDev = new QPushButton(AssignNodeDlg);
        updateDev->setObjectName(QStringLiteral("updateDev"));

        horizontalLayout_7->addWidget(updateDev);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_7);

        frame = new QFrame(AssignNodeDlg);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        filterEdit = new QLineEdit(frame);
        filterEdit->setObjectName(QStringLiteral("filterEdit"));
        filterEdit->setMaximumSize(QSize(60, 16777215));

        verticalLayout_3->addWidget(filterEdit);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        RNTable = new QTableWidget(frame);
        RNTable->setObjectName(QStringLiteral("RNTable"));
        RNTable->setMaximumSize(QSize(180, 16777215));

        verticalLayout_4->addWidget(RNTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nodeCount = new QLabel(frame);
        nodeCount->setObjectName(QStringLiteral("nodeCount"));

        horizontalLayout_2->addWidget(nodeCount);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        selectedCount = new QLabel(frame);
        selectedCount->setObjectName(QStringLiteral("selectedCount"));

        horizontalLayout_3->addWidget(selectedCount);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 99, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        assignBtn = new QPushButton(frame);
        assignBtn->setObjectName(QStringLiteral("assignBtn"));
        assignBtn->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(assignBtn);

        unassignBtn = new QPushButton(frame);
        unassignBtn->setObjectName(QStringLiteral("unassignBtn"));
        unassignBtn->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(unassignBtn);

        verticalSpacer_2 = new QSpacerItem(20, 99, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        lineCbx = new QComboBox(frame);
        lineCbx->setObjectName(QStringLiteral("lineCbx"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineCbx->sizePolicy().hasHeightForWidth());
        lineCbx->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineCbx);


        verticalLayout_5->addLayout(horizontalLayout);

        currentDepolyTable = new QTableWidget(frame);
        if (currentDepolyTable->columnCount() < 2)
            currentDepolyTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        currentDepolyTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        currentDepolyTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        currentDepolyTable->setObjectName(QStringLiteral("currentDepolyTable"));
        currentDepolyTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(currentDepolyTable);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        assignedCount = new QLabel(frame);
        assignedCount->setObjectName(QStringLiteral("assignedCount"));

        horizontalLayout_4->addWidget(assignedCount);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        unassignedCount = new QLabel(frame);
        unassignedCount->setObjectName(QStringLiteral("unassignedCount"));

        horizontalLayout_5->addWidget(unassignedCount);


        verticalLayout_5->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 99, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        moveUpBtn = new QPushButton(frame);
        moveUpBtn->setObjectName(QStringLiteral("moveUpBtn"));
        moveUpBtn->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(moveUpBtn);

        moveDownBtn = new QPushButton(frame);
        moveDownBtn->setObjectName(QStringLiteral("moveDownBtn"));
        moveDownBtn->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(moveDownBtn);

        verticalSpacer_4 = new QSpacerItem(20, 99, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_6->setStretch(3, 1);

        verticalLayout_6->addWidget(frame);

        line = new QFrame(AssignNodeDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        okBtn = new QPushButton(AssignNodeDlg);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout_8->addWidget(okBtn);

        applyBtn = new QPushButton(AssignNodeDlg);
        applyBtn->setObjectName(QStringLiteral("applyBtn"));

        horizontalLayout_8->addWidget(applyBtn);

        cancelBtn = new QPushButton(AssignNodeDlg);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout_8->addWidget(cancelBtn);


        verticalLayout_6->addLayout(horizontalLayout_8);


        retranslateUi(AssignNodeDlg);

        QMetaObject::connectSlotsByName(AssignNodeDlg);
    } // setupUi

    void retranslateUi(QDialog *AssignNodeDlg)
    {
        AssignNodeDlg->setWindowTitle(QApplication::translate("AssignNodeDlg", "AssignNodeDlg", 0));
        label->setText(QApplication::translate("AssignNodeDlg", "Current Area:", 0));
        updateDev->setText(QApplication::translate("AssignNodeDlg", "&Update Device", 0));
        label_9->setText(QApplication::translate("AssignNodeDlg", "Filter:", 0));
        filterEdit->setText(QApplication::translate("AssignNodeDlg", "G", 0));
        label_6->setText(QApplication::translate("AssignNodeDlg", "Unssigned RNs \n"
"(ordered by Device No)", 0));
        label_2->setText(QApplication::translate("AssignNodeDlg", "       Count:", 0));
        nodeCount->setText(QApplication::translate("AssignNodeDlg", "0", 0));
        label_3->setText(QApplication::translate("AssignNodeDlg", "     Selected:", 0));
        selectedCount->setText(QApplication::translate("AssignNodeDlg", "0", 0));
        assignBtn->setText(QApplication::translate("AssignNodeDlg", ">", 0));
        unassignBtn->setText(QApplication::translate("AssignNodeDlg", "<", 0));
        label_7->setText(QApplication::translate("AssignNodeDlg", "Current\n"
"Depolyments", 0));
        label_8->setText(QApplication::translate("AssignNodeDlg", "Line:", 0));
        QTableWidgetItem *___qtablewidgetitem = currentDepolyTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AssignNodeDlg", "Station", 0));
        QTableWidgetItem *___qtablewidgetitem1 = currentDepolyTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AssignNodeDlg", "Remote Node", 0));
        label_5->setText(QApplication::translate("AssignNodeDlg", "        Assigned:", 0));
        assignedCount->setText(QApplication::translate("AssignNodeDlg", "0", 0));
        label_4->setText(QApplication::translate("AssignNodeDlg", "       Unassigned:", 0));
        unassignedCount->setText(QApplication::translate("AssignNodeDlg", "0", 0));
        moveUpBtn->setText(QApplication::translate("AssignNodeDlg", "\316\233", 0));
        moveDownBtn->setText(QApplication::translate("AssignNodeDlg", "V", 0));
        okBtn->setText(QApplication::translate("AssignNodeDlg", "&Ok", 0));
        applyBtn->setText(QApplication::translate("AssignNodeDlg", "&Apply", 0));
        cancelBtn->setText(QApplication::translate("AssignNodeDlg", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AssignNodeDlg: public Ui_AssignNodeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNNODEDLG_H
