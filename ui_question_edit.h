/********************************************************************************
** Form generated from reading UI file 'question_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTION_EDIT_H
#define UI_QUESTION_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_question_edit
{
public:
    QLabel *label;
    QPushButton *sure;
    QPushButton *cancel;
    QLineEdit *question;

    void setupUi(QDialog *question_edit)
    {
        if (question_edit->objectName().isEmpty())
            question_edit->setObjectName(QString::fromUtf8("question_edit"));
        question_edit->resize(401, 161);
        label = new QLabel(question_edit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 91, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        sure = new QPushButton(question_edit);
        sure->setObjectName(QString::fromUtf8("sure"));
        sure->setGeometry(QRect(100, 120, 80, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        sure->setFont(font1);
        cancel = new QPushButton(question_edit);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(230, 120, 80, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        cancel->setFont(font2);
        question = new QLineEdit(question_edit);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(120, 50, 261, 31));
        question->setFont(font2);

        retranslateUi(question_edit);

        QMetaObject::connectSlotsByName(question_edit);
    } // setupUi

    void retranslateUi(QDialog *question_edit)
    {
        question_edit->setWindowTitle(QApplication::translate("question_edit", "Dialog", nullptr));
        label->setText(QApplication::translate("question_edit", "\344\275\240\347\232\204\351\227\256\351\242\230\346\230\257\357\274\237", nullptr));
        sure->setText(QApplication::translate("question_edit", "\347\241\256\350\256\244", nullptr));
        cancel->setText(QApplication::translate("question_edit", "\345\217\226\346\266\210", nullptr));
        question->setPlaceholderText(QApplication::translate("question_edit", "\344\270\215\350\266\205\350\277\20735\345\255\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class question_edit: public Ui_question_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTION_EDIT_H
