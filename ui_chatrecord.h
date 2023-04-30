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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chatRecord
{
public:
    QPushButton *return_2;
    QLabel *label;
    QLineEdit *recordSearch;
    QPushButton *pushButton;

    void setupUi(QDialog *chatRecord)
    {
        if (chatRecord->objectName().isEmpty())
            chatRecord->setObjectName(QString::fromUtf8("chatRecord"));
        chatRecord->resize(402, 372);
        return_2 = new QPushButton(chatRecord);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(300, 300, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);
        label = new QLabel(chatRecord);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 411, 381));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/back4.jpg")));
        recordSearch = new QLineEdit(chatRecord);
        recordSearch->setObjectName(QString::fromUtf8("recordSearch"));
        recordSearch->setGeometry(QRect(40, 30, 291, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        recordSearch->setFont(font1);
        pushButton = new QPushButton(chatRecord);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 30, 61, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 20, 255);"));
        label->raise();
        return_2->raise();
        recordSearch->raise();
        pushButton->raise();

        retranslateUi(chatRecord);

        QMetaObject::connectSlotsByName(chatRecord);
    } // setupUi

    void retranslateUi(QDialog *chatRecord)
    {
        chatRecord->setWindowTitle(QApplication::translate("chatRecord", "Dialog", nullptr));
        return_2->setText(QApplication::translate("chatRecord", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        recordSearch->setPlaceholderText(QApplication::translate("chatRecord", "\350\276\223\345\205\245\345\205\263\351\224\256\350\257\215", nullptr));
        pushButton->setText(QApplication::translate("chatRecord", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatRecord: public Ui_chatRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATRECORD_H
