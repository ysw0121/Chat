/********************************************************************************
** Form generated from reading UI file 'game_login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_LOGIN_H
#define UI_GAME_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_game_login
{
public:
    QPushButton *return_2;
    QPushButton *log;
    QLineEdit *name;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *showpsw;

    void setupUi(QDialog *game_login)
    {
        if (game_login->objectName().isEmpty())
            game_login->setObjectName(QString::fromUtf8("game_login"));
        game_login->resize(499, 361);
        return_2 = new QPushButton(game_login);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(290, 290, 80, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);
        log = new QPushButton(game_login);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(110, 290, 80, 41));
        log->setFont(font);
        name = new QLineEdit(game_login);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(170, 70, 201, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        name->setFont(font1);
        password = new QLineEdit(game_login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(170, 180, 201, 31));
        password->setFont(font1);
        label = new QLabel(game_login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 61, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(game_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 180, 61, 31));
        label_2->setFont(font);
        showpsw = new QCheckBox(game_login);
        showpsw->setObjectName(QString::fromUtf8("showpsw"));
        showpsw->setGeometry(QRect(310, 240, 81, 18));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        showpsw->setFont(font3);

        retranslateUi(game_login);

        QMetaObject::connectSlotsByName(game_login);
    } // setupUi

    void retranslateUi(QDialog *game_login)
    {
        game_login->setWindowTitle(QApplication::translate("game_login", "Dialog", nullptr));
        return_2->setText(QApplication::translate("game_login", "\350\277\224\345\233\236", nullptr));
        log->setText(QApplication::translate("game_login", "\347\231\273\345\275\225", nullptr));
        name->setPlaceholderText(QApplication::translate("game_login", "\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\342\200\246\342\200\246", nullptr));
        password->setInputMask(QString());
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("game_login", "\350\276\223\345\205\245\345\257\206\347\240\201\342\200\246\342\200\246", nullptr));
        label->setText(QApplication::translate("game_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("game_login", "\345\257\206\347\240\201", nullptr));
        showpsw->setText(QApplication::translate("game_login", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_login: public Ui_game_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_LOGIN_H
