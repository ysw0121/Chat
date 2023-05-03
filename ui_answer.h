/********************************************************************************
** Form generated from reading UI file 'answer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWER_H
#define UI_ANSWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Answer
{
public:
    QLabel *question;
    QLineEdit *answerEdit;
    QPushButton *send;

    void setupUi(QDialog *Answer)
    {
        if (Answer->objectName().isEmpty())
            Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->resize(400, 167);
        question = new QLabel(Answer);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(30, 10, 341, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        question->setFont(font);
        question->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        answerEdit = new QLineEdit(Answer);
        answerEdit->setObjectName(QString::fromUtf8("answerEdit"));
        answerEdit->setGeometry(QRect(30, 80, 341, 31));
        answerEdit->setFont(font);
        send = new QPushButton(Answer);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(280, 119, 80, 41));
        send->setFont(font);

        retranslateUi(Answer);

        QMetaObject::connectSlotsByName(Answer);
    } // setupUi

    void retranslateUi(QDialog *Answer)
    {
        Answer->setWindowTitle(QApplication::translate("Answer", "Dialog", nullptr));
        question->setText(QString());
        answerEdit->setPlaceholderText(QApplication::translate("Answer", "\344\275\240\347\232\204\345\233\236\347\255\224", nullptr));
        send->setText(QApplication::translate("Answer", "\345\217\221\351\200\201\347\224\263\350\257\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Answer: public Ui_Answer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWER_H
