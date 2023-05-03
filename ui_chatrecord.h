/********************************************************************************
** Form generated from reading UI file 'chatrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATRECORD_H
#define UI_CHATRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chatRecord
{
public:
    QPushButton *return_2;
    QLabel *label;
    QLineEdit *recordSearch;
    QPushButton *search;
    QCheckBox *accor_friend;
    QCheckBox *accor_content;
    QListWidget *recordList;

    void setupUi(QDialog *chatRecord)
    {
        if (chatRecord->objectName().isEmpty())
            chatRecord->setObjectName(QString::fromUtf8("chatRecord"));
        chatRecord->resize(507, 488);
        return_2 = new QPushButton(chatRecord);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(410, 440, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);
        label = new QLabel(chatRecord);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -10, 521, 501));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/back4.jpg")));
        recordSearch = new QLineEdit(chatRecord);
        recordSearch->setObjectName(QString::fromUtf8("recordSearch"));
        recordSearch->setGeometry(QRect(40, 20, 361, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        recordSearch->setFont(font1);
        search = new QPushButton(chatRecord);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(400, 20, 61, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        search->setFont(font2);
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 20, 255);"));
        accor_friend = new QCheckBox(chatRecord);
        accor_friend->setObjectName(QString::fromUtf8("accor_friend"));
        accor_friend->setGeometry(QRect(90, 70, 121, 21));
        accor_friend->setFont(font1);
        accor_friend->setStyleSheet(QString::fromUtf8("color: rgb(23, 255, 11);"));
        accor_content = new QCheckBox(chatRecord);
        accor_content->setObjectName(QString::fromUtf8("accor_content"));
        accor_content->setGeometry(QRect(290, 70, 111, 21));
        accor_content->setFont(font1);
        accor_content->setStyleSheet(QString::fromUtf8("color:rgb(23, 255, 11)"));
        recordList = new QListWidget(chatRecord);
        recordList->setObjectName(QString::fromUtf8("recordList"));
        recordList->setGeometry(QRect(40, 110, 431, 321));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        recordList->setFont(font3);
        label->raise();
        return_2->raise();
        recordSearch->raise();
        search->raise();
        accor_friend->raise();
        accor_content->raise();
        recordList->raise();

        retranslateUi(chatRecord);

        QMetaObject::connectSlotsByName(chatRecord);
    } // setupUi

    void retranslateUi(QDialog *chatRecord)
    {
        chatRecord->setWindowTitle(QApplication::translate("chatRecord", "Dialog", nullptr));
        return_2->setText(QApplication::translate("chatRecord", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        recordSearch->setPlaceholderText(QApplication::translate("chatRecord", "\350\276\223\345\205\245\345\205\263\351\224\256\350\257\215", nullptr));
        search->setText(QApplication::translate("chatRecord", "\346\220\234\347\264\242", nullptr));
        accor_friend->setText(QApplication::translate("chatRecord", "\346\214\211\345\245\275\345\217\213\346\220\234\347\264\242", nullptr));
        accor_content->setText(QApplication::translate("chatRecord", "\346\214\211\345\206\205\345\256\271\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatRecord: public Ui_chatRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATRECORD_H
