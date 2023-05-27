/********************************************************************************
** Form generated from reading UI file 'moments.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOMENTS_H
#define UI_MOMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_moments
{
public:
    QPushButton *return_2;
    QLabel *label;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *content_send;
    QListWidget *mainWind;

    void setupUi(QDialog *moments)
    {
        if (moments->objectName().isEmpty())
            moments->setObjectName(QString::fromUtf8("moments"));
        moments->resize(761, 429);
        return_2 = new QPushButton(moments);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(660, 390, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);
        label = new QLabel(moments);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-260, -150, 1021, 591));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/R.jpg")));
        label_4 = new QLabel(moments);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 340, 301, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 127);"));
        textEdit = new QTextEdit(moments);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(470, 10, 231, 311));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        content_send = new QPushButton(moments);
        content_send->setObjectName(QString::fromUtf8("content_send"));
        content_send->setGeometry(QRect(630, 320, 71, 31));
        content_send->setFont(font1);
        mainWind = new QListWidget(moments);
        mainWind->setObjectName(QString::fromUtf8("mainWind"));
        mainWind->setGeometry(QRect(20, 11, 401, 311));
        QFont font3;
        font3.setPointSize(11);
        mainWind->setFont(font3);
        mainWind->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mainWind->setSelectionMode(QAbstractItemView::SingleSelection);
        mainWind->setSelectionBehavior(QAbstractItemView::SelectColumns);
        label->raise();
        return_2->raise();
        label_4->raise();
        textEdit->raise();
        content_send->raise();
        mainWind->raise();

        retranslateUi(moments);

        QMetaObject::connectSlotsByName(moments);
    } // setupUi

    void retranslateUi(QDialog *moments)
    {
        moments->setWindowTitle(QApplication::translate("moments", "Dialog", nullptr));
        return_2->setText(QApplication::translate("moments", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        label_4->setText(QApplication::translate("moments", "\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\351\200\211\344\270\255\345\210\227\350\241\250\351\200\211\351\241\271\350\277\233\345\205\245\350\257\204\350\256\272\345\222\214\347\202\271\350\265\236", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("moments", "\345\210\206\344\272\253\344\275\240\347\232\204\346\227\245\345\270\270\345\220\247", nullptr));
        content_send->setText(QApplication::translate("moments", "\345\217\221\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moments: public Ui_moments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOMENTS_H
