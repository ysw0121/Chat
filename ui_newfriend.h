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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newFriend
{
public:
    QPushButton *return_2;
    QLabel *label;
    QLineEdit *searchLine;
    QLabel *label_2;
    QPushButton *go;
    QListWidget *result;
    QLabel *label_3;
    QListWidget *applyList;
    QCheckBox *name_accord;
    QCheckBox *phone_accord;
    QLabel *label_4;

    void setupUi(QDialog *newFriend)
    {
        if (newFriend->objectName().isEmpty())
            newFriend->setObjectName(QString::fromUtf8("newFriend"));
        newFriend->resize(580, 444);
        return_2 = new QPushButton(newFriend);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(480, 400, 80, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);
        label = new QLabel(newFriend);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 581, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/back3.jpg")));
        searchLine = new QLineEdit(newFriend);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setGeometry(QRect(30, 30, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        searchLine->setFont(font1);
        label_2 = new QLabel(newFriend);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 30, 61, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(33, 185, 255);"));
        go = new QPushButton(newFriend);
        go->setObjectName(QString::fromUtf8("go"));
        go->setGeometry(QRect(220, 30, 41, 31));
        go->setFont(font2);
        result = new QListWidget(newFriend);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(30, 140, 221, 241));
        QFont font3;
        font3.setPointSize(12);
        result->setFont(font3);
        label_3 = new QLabel(newFriend);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 61, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(33, 185, 255);"));
        applyList = new QListWidget(newFriend);
        applyList->setObjectName(QString::fromUtf8("applyList"));
        applyList->setGeometry(QRect(310, 51, 251, 331));
        applyList->setFont(font3);
        applyList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        name_accord = new QCheckBox(newFriend);
        name_accord->setObjectName(QString::fromUtf8("name_accord"));
        name_accord->setGeometry(QRect(30, 80, 101, 21));
        name_accord->setFont(font2);
        name_accord->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 127);"));
        phone_accord = new QCheckBox(newFriend);
        phone_accord->setObjectName(QString::fromUtf8("phone_accord"));
        phone_accord->setGeometry(QRect(150, 80, 111, 21));
        phone_accord->setFont(font2);
        phone_accord->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 127);"));
        label_4 = new QLabel(newFriend);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 420, 251, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 127);"));
        label->raise();
        return_2->raise();
        searchLine->raise();
        label_2->raise();
        go->raise();
        result->raise();
        label_3->raise();
        applyList->raise();
        name_accord->raise();
        phone_accord->raise();
        label_4->raise();

        retranslateUi(newFriend);

        QMetaObject::connectSlotsByName(newFriend);
    } // setupUi

    void retranslateUi(QDialog *newFriend)
    {
        newFriend->setWindowTitle(QApplication::translate("newFriend", "Dialog", nullptr));
        return_2->setText(QApplication::translate("newFriend", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        searchLine->setPlaceholderText(QApplication::translate("newFriend", "\345\212\240\345\245\275\345\217\213\357\274\232\350\276\223\345\205\245\346\230\265\347\247\260\346\210\226\346\211\213\346\234\272\345\217\267", nullptr));
        label_2->setText(QApplication::translate("newFriend", "\345\245\275\345\217\213\347\224\263\350\257\267", nullptr));
        go->setText(QApplication::translate("newFriend", "\346\220\234\347\264\242", nullptr));
        label_3->setText(QApplication::translate("newFriend", "\346\220\234\347\264\242\347\273\223\346\236\234", nullptr));
        name_accord->setText(QApplication::translate("newFriend", "\346\214\211\346\230\265\347\247\260\346\220\234\347\264\242", nullptr));
        phone_accord->setText(QApplication::translate("newFriend", "\346\214\211\347\224\265\350\257\235\345\217\267\346\220\234\347\264\242", nullptr));
        label_4->setText(QApplication::translate("newFriend", "\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\351\200\211\344\270\255\345\210\227\350\241\250\351\200\211\351\241\271\346\237\245\347\234\213\350\257\246\346\203\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFriend: public Ui_newFriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFRIEND_H
