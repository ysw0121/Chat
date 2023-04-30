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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_moments
{
public:
    QPushButton *return_2;

    void setupUi(QDialog *moments)
    {
        if (moments->objectName().isEmpty())
            moments->setObjectName(QString::fromUtf8("moments"));
        moments->resize(400, 300);
        return_2 = new QPushButton(moments);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(250, 240, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        return_2->setFont(font);

        retranslateUi(moments);

        QMetaObject::connectSlotsByName(moments);
    } // setupUi

    void retranslateUi(QDialog *moments)
    {
        moments->setWindowTitle(QApplication::translate("moments", "Dialog", nullptr));
        return_2->setText(QApplication::translate("moments", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moments: public Ui_moments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOMENTS_H
