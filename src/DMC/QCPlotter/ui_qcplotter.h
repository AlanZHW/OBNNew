/********************************************************************************
** Form generated from reading UI file 'qcplotter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCPLOTTER_H
#define UI_QCPLOTTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_QCPlotter
{
public:

    void setupUi(QDialog *QCPlotter)
    {
        if (QCPlotter->objectName().isEmpty())
            QCPlotter->setObjectName(QStringLiteral("QCPlotter"));
        QCPlotter->resize(931, 587);

        retranslateUi(QCPlotter);

        QMetaObject::connectSlotsByName(QCPlotter);
    } // setupUi

    void retranslateUi(QDialog *QCPlotter)
    {
        QCPlotter->setWindowTitle(QApplication::translate("QCPlotter", "QCPlotter", 0));
    } // retranslateUi

};

namespace Ui {
    class QCPlotter: public Ui_QCPlotter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCPLOTTER_H
