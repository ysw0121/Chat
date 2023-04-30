/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QPushButton *setting;
    QPushButton *moments;
    QPushButton *exit;
    QLabel *label;
    QPushButton *new_friends;
    QPushButton *my_history;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *send;
    QLabel *label_3;
    QLabel *receiver;
    QListWidget *chatWindow;
    QListWidget *contactList;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(686, 517);
        setting = new QPushButton(User);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(20, 60, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        setting->setFont(font);
        setting->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);"));
        moments = new QPushButton(User);
        moments->setObjectName(QString::fromUtf8("moments"));
        moments->setGeometry(QRect(20, 150, 80, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        moments->setFont(font1);
        moments->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(255, 170, 0);"));
        exit = new QPushButton(User);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(610, 0, 80, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        exit->setFont(font2);
        exit->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-80, -60, 771, 581));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/back3.jpg")));
        new_friends = new QPushButton(User);
        new_friends->setObjectName(QString::fromUtf8("new_friends"));
        new_friends->setGeometry(QRect(20, 330, 80, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Black"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        new_friends->setFont(font3);
        new_friends->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);\n"
"background-color: rgb(255, 255, 127);"));
        my_history = new QPushButton(User);
        my_history->setObjectName(QString::fromUtf8("my_history"));
        my_history->setGeometry(QRect(20, 240, 80, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Agency FB"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        my_history->setFont(font4);
        my_history->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"color: rgb(255, 170, 255);"));
        textEdit = new QTextEdit(User);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(150, 350, 361, 101));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(14);
        textEdit->setFont(font5);
        textEdit->setFrameShape(QFrame::Box);
        textEdit->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 30, 61, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 186, 255);\n"
"color: rgb(87, 255, 57);\n"
"border-color: rgb(0, 255, 255);"));
        label_2->setFrameShape(QFrame::NoFrame);
        send = new QPushButton(User);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(450, 450, 61, 31));
        send->setFont(font6);
        label_3 = new QLabel(User);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 450, 361, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 243, 245);"));
        receiver = new QLabel(User);
        receiver->setObjectName(QString::fromUtf8("receiver"));
        receiver->setGeometry(QRect(150, 29, 361, 31));
        receiver->setFont(font6);
        receiver->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        chatWindow = new QListWidget(User);
        chatWindow->setObjectName(QString::fromUtf8("chatWindow"));
        chatWindow->setGeometry(QRect(150, 60, 361, 281));
        QFont font7;
        font7.setPointSize(14);
        chatWindow->setFont(font7);
        chatWindow->setFrameShape(QFrame::Box);
        chatWindow->setFrameShadow(QFrame::Plain);
        chatWindow->setProperty("showDropIndicator", QVariant(true));
        chatWindow->setSelectionMode(QAbstractItemView::SingleSelection);
        contactList = new QListWidget(User);
        contactList->setObjectName(QString::fromUtf8("contactList"));
        contactList->setGeometry(QRect(520, 60, 151, 421));
        QFont font8;
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setWeight(75);
        contactList->setFont(font8);
        contactList->setProperty("showDropIndicator", QVariant(false));
        label->raise();
        setting->raise();
        moments->raise();
        exit->raise();
        new_friends->raise();
        my_history->raise();
        textEdit->raise();
        label_2->raise();
        label_3->raise();
        send->raise();
        receiver->raise();
        chatWindow->raise();
        contactList->raise();

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QApplication::translate("User", "Dialog", nullptr));
        setting->setText(QApplication::translate("User", "\350\256\276\347\275\256", nullptr));
        moments->setText(QApplication::translate("User", "\346\234\213\345\217\213\345\234\210", nullptr));
        exit->setText(QApplication::translate("User", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QString());
        new_friends->setText(QApplication::translate("User", "\346\226\260\347\232\204\346\234\213\345\217\213", nullptr));
        my_history->setText(QApplication::translate("User", "\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
        label_2->setText(QApplication::translate("User", "\351\200\232\350\256\257\345\275\225", nullptr));
        send->setText(QApplication::translate("User", "\345\217\221\351\200\201", nullptr));
        label_3->setText(QString());
        receiver->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
