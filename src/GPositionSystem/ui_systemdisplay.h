/********************************************************************************
** Form generated from reading UI file 'systemdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMDISPLAY_H
#define UI_SYSTEMDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_systemdisplay
{
public:

    void setupUi(QWidget *systemdisplay)
    {
        if (systemdisplay->objectName().isEmpty())
            systemdisplay->setObjectName(QStringLiteral("systemdisplay"));
        systemdisplay->resize(400, 300);

        retranslateUi(systemdisplay);

        QMetaObject::connectSlotsByName(systemdisplay);
    } // setupUi

    void retranslateUi(QWidget *systemdisplay)
    {
        systemdisplay->setWindowTitle(QApplication::translate("systemdisplay", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class systemdisplay: public Ui_systemdisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMDISPLAY_H
