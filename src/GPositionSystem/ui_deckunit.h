/********************************************************************************
** Form generated from reading UI file 'deckunit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECKUNIT_H
#define UI_DECKUNIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeckUnit
{
public:

    void setupUi(QWidget *DeckUnit)
    {
        if (DeckUnit->objectName().isEmpty())
            DeckUnit->setObjectName(QStringLiteral("DeckUnit"));
        DeckUnit->resize(329, 136);

        retranslateUi(DeckUnit);

        QMetaObject::connectSlotsByName(DeckUnit);
    } // setupUi

    void retranslateUi(QWidget *DeckUnit)
    {
        DeckUnit->setWindowTitle(QApplication::translate("DeckUnit", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class DeckUnit: public Ui_DeckUnit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECKUNIT_H
