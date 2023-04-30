/********************************************************************************
** Form generated from reading UI file 'newfriend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFRIEND_H
#define UI_NEWFRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_newFriend
{
public:
    QPushButton *return_2;
    QLabel *label;
    QLineEdit *search;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *newFriend)
    {
        if (newFriend->objectName().isEmpty())
            newFriend->setObjectName(QString::fromUtf8("newFriend"));
        newFriend->resize(424, 325);
        return_2 = new QPushButton(newFriend);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(300, 270, 80, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);
        label = new QLabel(newFriend);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-7, -10, 441, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/back3.jpg")));
        search = new QLineEdit(newFriend);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(90, 20, 301, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        search->setFont(font1);
        textBrowser = new QTextBrowser(newFriend);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(90, 60, 301, 201));
        label_2 = new QLabel(newFriend);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(13, 70, 61, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(33, 185, 255);"));
        label->raise();
        return_2->raise();
        search->raise();
        textBrowser->raise();
        label_2->raise();

        retranslateUi(newFriend);

        QMetaObject::connectSlotsByName(newFriend);
    } // setupUi

    void retranslateUi(QDialog *newFriend)
    {
        newFriend->setWindowTitle(QApplication::translate("newFriend", "Dialog", nullptr));
        return_2->setText(QApplication::translate("newFriend", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        search->setPlaceholderText(QApplication::translate("newFriend", "\345\212\240\345\245\275\345\217\213\357\274\232\350\276\223\345\205\245\346\230\265\347\247\260\346\210\226\346\211\213\346\234\272\345\217\267", nullptr));
        label_2->setText(QApplication::translate("newFriend", "\345\245\275\345\217\213\347\224\263\350\257\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFriend: public Ui_newFriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFRIEND_H
