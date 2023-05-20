/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *RegistButton;
    QPushButton *Return2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nickname;
    QLineEdit *phone;
    QLineEdit *Password;
    QLabel *label_4;
    QLineEdit *ReconfirmPassword;
    QLabel *label_5;
    QLineEdit *identify;
    QCheckBox *ShowPassword2;
    QLabel *label_6;
    QLabel *phoneCorrect;
    QLabel *pswCorrect;
    QLabel *pswDiffer;
    QLabel *nameEmpty;
    QLabel *vertifyCorrect;
    QLabel *vertify;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(584, 452);
        RegistButton = new QPushButton(Register);
        RegistButton->setObjectName(QString::fromUtf8("RegistButton"));
        RegistButton->setGeometry(QRect(130, 380, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Goudy Old Style"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        RegistButton->setFont(font);
        Return2 = new QPushButton(Register);
        Return2->setObjectName(QString::fromUtf8("Return2"));
        Return2->setGeometry(QRect(350, 380, 91, 41));
        Return2->setFont(font);
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Narrow"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 71, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 151, 71, 31));
        label_3->setFont(font1);
        nickname = new QLineEdit(Register);
        nickname->setObjectName(QString::fromUtf8("nickname"));
        nickname->setGeometry(QRect(230, 30, 171, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        nickname->setFont(font2);
        phone = new QLineEdit(Register);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(230, 90, 171, 31));
        phone->setFont(font2);
        Password = new QLineEdit(Register);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(230, 150, 171, 31));
        Password->setFont(font2);
        Password->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 210, 121, 31));
        label_4->setFont(font1);
        ReconfirmPassword = new QLineEdit(Register);
        ReconfirmPassword->setObjectName(QString::fromUtf8("ReconfirmPassword"));
        ReconfirmPassword->setGeometry(QRect(230, 210, 171, 31));
        ReconfirmPassword->setFont(font2);
        ReconfirmPassword->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(Register);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 280, 71, 31));
        label_5->setFont(font1);
        identify = new QLineEdit(Register);
        identify->setObjectName(QString::fromUtf8("identify"));
        identify->setGeometry(QRect(230, 280, 171, 31));
        identify->setFont(font2);
        ShowPassword2 = new QCheckBox(Register);
        ShowPassword2->setObjectName(QString::fromUtf8("ShowPassword2"));
        ShowPassword2->setGeometry(QRect(340, 250, 91, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Agency FB"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        ShowPassword2->setFont(font3);
        label_6 = new QLabel(Register);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(430, 320, 101, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label_6->setFont(font4);
        phoneCorrect = new QLabel(Register);
        phoneCorrect->setObjectName(QString::fromUtf8("phoneCorrect"));
        phoneCorrect->setGeometry(QRect(410, 80, 161, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        phoneCorrect->setFont(font5);
        phoneCorrect->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        pswCorrect = new QLabel(Register);
        pswCorrect->setObjectName(QString::fromUtf8("pswCorrect"));
        pswCorrect->setGeometry(QRect(410, 150, 171, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        pswCorrect->setFont(font6);
        pswCorrect->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        pswDiffer = new QLabel(Register);
        pswDiffer->setObjectName(QString::fromUtf8("pswDiffer"));
        pswDiffer->setGeometry(QRect(420, 220, 131, 16));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        pswDiffer->setFont(font7);
        pswDiffer->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        nameEmpty = new QLabel(Register);
        nameEmpty->setObjectName(QString::fromUtf8("nameEmpty"));
        nameEmpty->setGeometry(QRect(410, 40, 111, 16));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Agency FB"));
        font8.setPointSize(10);
        nameEmpty->setFont(font8);
        nameEmpty->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        vertifyCorrect = new QLabel(Register);
        vertifyCorrect->setObjectName(QString::fromUtf8("vertifyCorrect"));
        vertifyCorrect->setGeometry(QRect(230, 330, 101, 16));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Agency FB"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setWeight(75);
        vertifyCorrect->setFont(font9);
        vertifyCorrect->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        vertify = new QLabel(Register);
        vertify->setObjectName(QString::fromUtf8("vertify"));
        vertify->setGeometry(QRect(430, 280, 111, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Arial"));
        font10.setPointSize(16);
        font10.setBold(true);
        font10.setItalic(true);
        font10.setWeight(75);
        vertify->setFont(font10);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", nullptr));
        RegistButton->setText(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        Return2->setText(QApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("Register", "\346\230\265\347\247\260", nullptr));
        label_2->setText(QApplication::translate("Register", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_3->setText(QApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("Register", "\345\257\206\347\240\201\345\206\215\346\254\241\347\241\256\350\256\244", nullptr));
        label_5->setText(QApplication::translate("Register", "\351\252\214\350\257\201\347\240\201", nullptr));
        ShowPassword2->setText(QApplication::translate("Register", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        label_6->setText(QApplication::translate("Register", "\347\234\213\344\270\215\346\270\205\357\274\237\346\215\242\344\270\200\345\274\240", nullptr));
        phoneCorrect->setText(QApplication::translate("Register", "\350\276\223\345\205\24511\344\275\215\346\225\260\345\255\227", nullptr));
        pswCorrect->setText(QApplication::translate("Register", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\257\206\347\240\201\345\272\224\350\207\263\345\260\2218\344\275\215</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\261\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215\345\222\214\346\225\260\345\255\227\347\273\204\346\210\220</p></body></html>", nullptr));
        pswDiffer->setText(QString());
        nameEmpty->setText(QApplication::translate("Register", "\346\230\265\347\247\260\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        vertifyCorrect->setText(QApplication::translate("Register", "\351\252\214\350\257\201\347\240\201\344\270\215\350\203\275\344\270\272\347\251\272", nullptr));
        vertify->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
