/********************************************************************************
** Form generated from reading UI file 'gpositionsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPOSITIONSYSTEM_H
#define UI_GPOSITIONSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPositionSystem
{
public:

    void setupUi(QWidget *GPositionSystem)
    {
        if (GPositionSystem->objectName().isEmpty())
            GPositionSystem->setObjectName(QStringLiteral("GPositionSystem"));
        GPositionSystem->resize(900, 622);

        retranslateUi(GPositionSystem);

        QMetaObject::connectSlotsByName(GPositionSystem);
    } // setupUi

    void retranslateUi(QWidget *GPositionSystem)
    {
        GPositionSystem->setWindowTitle(QApplication::translate("GPositionSystem", "GPositionSystem", 0));
    } // retranslateUi

};

namespace Ui {
    class GPositionSystem: public Ui_GPositionSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPOSITIONSYSTEM_H
