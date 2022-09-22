/********************************************************************************
** Form generated from reading UI file 'gserialport.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSERIALPORT_H
#define UI_GSERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GSerialPort
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *SerialNumCbx;
    QLabel *label_2;
    QComboBox *baudRateCbx;
    QLabel *label_3;
    QComboBox *dataBitCbx;
    QLabel *label_4;
    QComboBox *stopBitCbx;
    QLabel *label_5;
    QComboBox *parityCbx;
    QLabel *label_6;
    QComboBox *flowControlCbx;

    void setupUi(QWidget *GSerialPort)
    {
        if (GSerialPort->objectName().isEmpty())
            GSerialPort->setObjectName(QStringLiteral("GSerialPort"));
        GSerialPort->resize(209, 251);
        verticalLayout_2 = new QVBoxLayout(GSerialPort);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(GSerialPort);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SerialNumCbx = new QComboBox(groupBox);
        SerialNumCbx->setObjectName(QStringLiteral("SerialNumCbx"));

        gridLayout->addWidget(SerialNumCbx, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        baudRateCbx = new QComboBox(groupBox);
        baudRateCbx->setObjectName(QStringLiteral("baudRateCbx"));

        gridLayout->addWidget(baudRateCbx, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dataBitCbx = new QComboBox(groupBox);
        dataBitCbx->setObjectName(QStringLiteral("dataBitCbx"));

        gridLayout->addWidget(dataBitCbx, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        stopBitCbx = new QComboBox(groupBox);
        stopBitCbx->setObjectName(QStringLiteral("stopBitCbx"));

        gridLayout->addWidget(stopBitCbx, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        parityCbx = new QComboBox(groupBox);
        parityCbx->setObjectName(QStringLiteral("parityCbx"));

        gridLayout->addWidget(parityCbx, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        flowControlCbx = new QComboBox(groupBox);
        flowControlCbx->setObjectName(QStringLiteral("flowControlCbx"));

        gridLayout->addWidget(flowControlCbx, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(GSerialPort);

        QMetaObject::connectSlotsByName(GSerialPort);
    } // setupUi

    void retranslateUi(QWidget *GSerialPort)
    {
        GSerialPort->setWindowTitle(QApplication::translate("GSerialPort", "Form", 0));
        groupBox->setTitle(QApplication::translate("GSerialPort", "GPS\346\216\245\346\224\266\344\270\262\345\217\243", 0));
        label->setText(QApplication::translate("GSerialPort", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("GSerialPort", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        baudRateCbx->clear();
        baudRateCbx->insertItems(0, QStringList()
         << QApplication::translate("GSerialPort", "9600", 0)
         << QApplication::translate("GSerialPort", "115200", 0)
         << QApplication::translate("GSerialPort", "256000", 0)
        );
        label_3->setText(QApplication::translate("GSerialPort", "\346\225\260\346\215\256\344\275\215:", 0));
        dataBitCbx->clear();
        dataBitCbx->insertItems(0, QStringList()
         << QApplication::translate("GSerialPort", "5", 0)
         << QApplication::translate("GSerialPort", "6", 0)
         << QApplication::translate("GSerialPort", "7", 0)
         << QApplication::translate("GSerialPort", "8", 0)
        );
        label_4->setText(QApplication::translate("GSerialPort", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        stopBitCbx->clear();
        stopBitCbx->insertItems(0, QStringList()
         << QApplication::translate("GSerialPort", "1", 0)
         << QApplication::translate("GSerialPort", "1.5", 0)
         << QApplication::translate("GSerialPort", "2", 0)
        );
        label_5->setText(QApplication::translate("GSerialPort", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        parityCbx->clear();
        parityCbx->insertItems(0, QStringList()
         << QApplication::translate("GSerialPort", "None", 0)
         << QApplication::translate("GSerialPort", "Odd", 0)
         << QApplication::translate("GSerialPort", "Even", 0)
         << QApplication::translate("GSerialPort", "Mark", 0)
         << QApplication::translate("GSerialPort", "Space", 0)
        );
        label_6->setText(QApplication::translate("GSerialPort", "\346\265\201\346\216\247\345\210\266\357\274\232", 0));
        flowControlCbx->clear();
        flowControlCbx->insertItems(0, QStringList()
         << QApplication::translate("GSerialPort", "None", 0)
         << QApplication::translate("GSerialPort", "Hardware", 0)
         << QApplication::translate("GSerialPort", "Software", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class GSerialPort: public Ui_GSerialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSERIALPORT_H
