/********************************************************************************
** Form generated from reading UI file 'like_and_comment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKE_AND_COMMENT_H
#define UI_LIKE_AND_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_like_and_comment
{
public:
    QPushButton *sure;
    QLineEdit *comment;
    QCheckBox *like;

    void setupUi(QDialog *like_and_comment)
    {
        if (like_and_comment->objectName().isEmpty())
            like_and_comment->setObjectName(QString::fromUtf8("like_and_comment"));
        like_and_comment->resize(503, 150);
        sure = new QPushButton(like_and_comment);
        sure->setObjectName(QString::fromUtf8("sure"));
        sure->setGeometry(QRect(200, 109, 80, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        sure->setFont(font);
        comment = new QLineEdit(like_and_comment);
        comment->setObjectName(QString::fromUtf8("comment"));
        comment->setGeometry(QRect(50, 20, 391, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        comment->setFont(font1);
        like = new QCheckBox(like_and_comment);
        like->setObjectName(QString::fromUtf8("like"));
        like->setGeometry(QRect(370, 80, 61, 31));
        like->setFont(font);
        like->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);"));

        retranslateUi(like_and_comment);

        QMetaObject::connectSlotsByName(like_and_comment);
    } // setupUi

    void retranslateUi(QDialog *like_and_comment)
    {
        like_and_comment->setWindowTitle(QApplication::translate("like_and_comment", "Dialog", nullptr));
        sure->setText(QApplication::translate("like_and_comment", "\347\241\256\350\256\244", nullptr));
        comment->setPlaceholderText(QApplication::translate("like_and_comment", "\350\257\264\347\202\271\344\273\200\344\271\210\345\220\247\342\200\246\342\200\246", nullptr));
        like->setText(QApplication::translate("like_and_comment", "\347\202\271\350\265\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class like_and_comment: public Ui_like_and_comment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKE_AND_COMMENT_H
