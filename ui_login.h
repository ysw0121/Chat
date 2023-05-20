/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *start;
    QPushButton *Return;
    QCheckBox *show_password;
    QLineEdit *account;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(508, 387);
        start = new QPushButton(login);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(70, 300, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        start->setFont(font);
        Return = new QPushButton(login);
        Return->setObjectName(QString::fromUtf8("Return"));
        Return->setGeometry(QRect(350, 300, 101, 41));
        Return->setFont(font);
        show_password = new QCheckBox(login);
        show_password->setObjectName(QString::fromUtf8("show_password"));
        show_password->setGeometry(QRect(330, 220, 73, 18));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        show_password->setFont(font1);
        account = new QLineEdit(login);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(130, 80, 241, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        account->setFont(font2);
        password = new QLineEdit(login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(130, 180, 241, 31));
        password->setFont(font2);
        password->setEchoMode(QLineEdit::Password);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 90, 91, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Narrow"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 190, 41, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial Black"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        start->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        Return->setText(QApplication::translate("login", "\350\277\224\345\233\236", nullptr));
        show_password->setText(QApplication::translate("login", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("login", "\350\264\246\345\217\267(\346\211\213\346\234\272\345\217\267)", nullptr));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
