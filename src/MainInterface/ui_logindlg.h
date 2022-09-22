/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *logoLbl;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *blVLayout;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *erweimBox;
    QFrame *logInBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QLineEdit *pwdEdit;
    QLineEdit *userNameEdit;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *changePwdBtn;
    QCheckBox *rmbPwdBtn;
    QLabel *pwdHintLbl;
    QPushButton *logInBtn;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *techAdvBtn;
    QPushButton *infoBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(840, 563);
        verticalLayout_2 = new QVBoxLayout(LoginDlg);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 6, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 12);
        logoLbl = new QLabel(LoginDlg);
        logoLbl->setObjectName(QStringLiteral("logoLbl"));
        logoLbl->setMinimumSize(QSize(150, 150));

        horizontalLayout->addWidget(logoLbl);

        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(46);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(14);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        blVLayout = new QVBoxLayout();
        blVLayout->setSpacing(12);
        blVLayout->setObjectName(QStringLiteral("blVLayout"));
        blVLayout->setContentsMargins(0, -1, -1, -1);
        label_2 = new QLabel(LoginDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        blVLayout->addWidget(label_2);

        label_3 = new QLabel(LoginDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        blVLayout->addWidget(label_3);

        erweimBox = new QFrame(LoginDlg);
        erweimBox->setObjectName(QStringLiteral("erweimBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(120);
        sizePolicy.setVerticalStretch(120);
        sizePolicy.setHeightForWidth(erweimBox->sizePolicy().hasHeightForWidth());
        erweimBox->setSizePolicy(sizePolicy);
        erweimBox->setMinimumSize(QSize(240, 280));
        erweimBox->setFrameShape(QFrame::Box);
        erweimBox->setFrameShadow(QFrame::Raised);

        blVLayout->addWidget(erweimBox, 0, Qt::AlignHCenter);


        horizontalLayout_2->addLayout(blVLayout);

        logInBox = new QFrame(LoginDlg);
        logInBox->setObjectName(QStringLiteral("logInBox"));
        logInBox->setFrameShape(QFrame::Box);
        logInBox->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(logInBox);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(logInBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setPointSize(19);
        label_5->setFont(font3);

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(24);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        pwdEdit = new QLineEdit(logInBox);
        pwdEdit->setObjectName(QStringLiteral("pwdEdit"));
        pwdEdit->setMinimumSize(QSize(0, 32));
        QFont font4;
        font4.setPointSize(11);
        pwdEdit->setFont(font4);

        gridLayout->addWidget(pwdEdit, 1, 1, 1, 1);

        userNameEdit = new QLineEdit(logInBox);
        userNameEdit->setObjectName(QStringLiteral("userNameEdit"));
        userNameEdit->setMinimumSize(QSize(0, 32));
        userNameEdit->setFont(font4);

        gridLayout->addWidget(userNameEdit, 0, 1, 1, 1);

        label_6 = new QLabel(logInBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(logInBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        changePwdBtn = new QPushButton(logInBox);
        changePwdBtn->setObjectName(QStringLiteral("changePwdBtn"));
        changePwdBtn->setFont(font2);

        gridLayout->addWidget(changePwdBtn, 2, 0, 1, 1);

        rmbPwdBtn = new QCheckBox(logInBox);
        rmbPwdBtn->setObjectName(QStringLiteral("rmbPwdBtn"));
        rmbPwdBtn->setFont(font2);

        gridLayout->addWidget(rmbPwdBtn, 2, 1, 1, 1);

        pwdHintLbl = new QLabel(logInBox);
        pwdHintLbl->setObjectName(QStringLiteral("pwdHintLbl"));

        gridLayout->addWidget(pwdHintLbl, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout);

        logInBtn = new QPushButton(logInBox);
        logInBtn->setObjectName(QStringLiteral("logInBtn"));
        logInBtn->setMinimumSize(QSize(200, 34));
        logInBtn->setMaximumSize(QSize(240, 16777215));

        verticalLayout->addWidget(logInBtn, 0, Qt::AlignHCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(44);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        techAdvBtn = new QPushButton(logInBox);
        techAdvBtn->setObjectName(QStringLiteral("techAdvBtn"));
        techAdvBtn->setFont(font2);

        horizontalLayout_3->addWidget(techAdvBtn);

        infoBtn = new QPushButton(logInBox);
        infoBtn->setObjectName(QStringLiteral("infoBtn"));
        infoBtn->setFont(font2);

        horizontalLayout_3->addWidget(infoBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(logInBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "Dialog", 0));
        logoLbl->setText(QString());
        label->setText(QApplication::translate("LoginDlg", "GOBS \351\207\207\351\233\206\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("LoginDlg", "\346\254\242\350\277\216\344\275\277\347\224\250GOBS\347\263\273\347\273\237", 0));
        label_3->setText(QApplication::translate("LoginDlg", "\347\211\210\346\235\203\345\261\236\344\270\255\345\234\260\350\243\205\357\274\210\351\207\215\345\272\206\357\274\211\345\234\260\350\264\250\344\273\252\345\231\250\346\234\211\351\231\220\345\205\254\345\217\270\346\211\200\346\234\211", 0));
        label_5->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\347\231\273\345\275\225", 0));
        label_6->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_7->setText(QApplication::translate("LoginDlg", "\345\257\206\347\240\201\357\274\232", 0));
        changePwdBtn->setText(QApplication::translate("LoginDlg", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        rmbPwdBtn->setText(QApplication::translate("LoginDlg", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        pwdHintLbl->setText(QString());
        logInBtn->setText(QApplication::translate("LoginDlg", "\347\231\273\345\275\225", 0));
        techAdvBtn->setText(QApplication::translate("LoginDlg", "\346\212\200\346\234\257\345\222\250\350\257\242", 0));
        infoBtn->setText(QApplication::translate("LoginDlg", "\346\233\264\345\244\232\350\265\204\350\256\257", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
