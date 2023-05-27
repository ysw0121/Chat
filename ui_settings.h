/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QCheckBox *number_permit;
    QCheckBox *name_permit;
    QLabel *SettingTitle;
    QLabel *label;
    QLabel *label_2;
    QPushButton *confirm;
    QLabel *label_4;
    QCheckBox *no_certi;
    QCheckBox *question;
    QLabel *label_5;
    QLineEdit *newName;
    QLineEdit *originPsw;
    QLineEdit *newPsw;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(486, 508);
        number_permit = new QCheckBox(Settings);
        number_permit->setObjectName(QString::fromUtf8("number_permit"));
        number_permit->setGeometry(QRect(190, 90, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        number_permit->setFont(font);
        number_permit->setCheckable(true);
        number_permit->setChecked(false);
        name_permit = new QCheckBox(Settings);
        name_permit->setObjectName(QString::fromUtf8("name_permit"));
        name_permit->setGeometry(QRect(290, 90, 71, 31));
        name_permit->setFont(font);
        name_permit->setCheckable(true);
        name_permit->setChecked(false);
        name_permit->setTristate(false);
        SettingTitle = new QLabel(Settings);
        SettingTitle->setObjectName(QString::fromUtf8("SettingTitle"));
        SettingTitle->setGeometry(QRect(200, 20, 101, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        SettingTitle->setFont(font1);
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -50, 501, 561));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back/backg2.jpg")));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 111, 31));
        label_2->setFont(font);
        confirm = new QPushButton(Settings);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(200, 460, 80, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        confirm->setFont(font2);
        label_4 = new QLabel(Settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 160, 151, 21));
        label_4->setFont(font);
        no_certi = new QCheckBox(Settings);
        no_certi->setObjectName(QString::fromUtf8("no_certi"));
        no_certi->setGeometry(QRect(190, 160, 121, 18));
        no_certi->setFont(font);
        no_certi->setChecked(false);
        no_certi->setAutoExclusive(true);
        question = new QCheckBox(Settings);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(290, 160, 131, 21));
        question->setFont(font);
        question->setChecked(false);
        question->setAutoExclusive(true);
        label_5 = new QLabel(Settings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 220, 131, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        newName = new QLineEdit(Settings);
        newName->setObjectName(QString::fromUtf8("newName"));
        newName->setGeometry(QRect(40, 270, 261, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        newName->setFont(font4);
        originPsw = new QLineEdit(Settings);
        originPsw->setObjectName(QString::fromUtf8("originPsw"));
        originPsw->setGeometry(QRect(40, 320, 261, 31));
        originPsw->setFont(font4);
        newPsw = new QLineEdit(Settings);
        newPsw->setObjectName(QString::fromUtf8("newPsw"));
        newPsw->setGeometry(QRect(40, 380, 261, 31));
        newPsw->setFont(font4);
        label->raise();
        number_permit->raise();
        name_permit->raise();
        SettingTitle->raise();
        label_2->raise();
        confirm->raise();
        label_4->raise();
        no_certi->raise();
        question->raise();
        label_5->raise();
        newName->raise();
        originPsw->raise();
        newPsw->raise();

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
        number_permit->setText(QApplication::translate("Settings", "\346\211\213\346\234\272\345\217\267", nullptr));
        name_permit->setText(QApplication::translate("Settings", "\346\230\265\347\247\260", nullptr));
        SettingTitle->setText(QApplication::translate("Settings", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Settings", "<html><head/><body><p>\346\267\273\345\212\240\346\210\221\347\232\204\346\226\271\345\274\217\357\274\232</p></body></html>", nullptr));
        confirm->setText(QApplication::translate("Settings", "\347\241\256\350\256\244", nullptr));
        label_4->setText(QApplication::translate("Settings", "\346\267\273\345\212\240\346\210\221\351\234\200\350\246\201\347\232\204\351\252\214\350\257\201\357\274\232", nullptr));
        no_certi->setText(QApplication::translate("Settings", "\346\227\240\351\234\200\351\252\214\350\257\201", nullptr));
        question->setText(QApplication::translate("Settings", "\351\234\200\350\246\201\345\233\236\347\255\224\351\227\256\351\242\230", nullptr));
        label_5->setText(QApplication::translate("Settings", "\344\277\256\346\224\271\346\230\265\347\247\260\345\222\214\345\257\206\347\240\201", nullptr));
        newName->setInputMask(QString());
        newName->setText(QString());
        newName->setPlaceholderText(QApplication::translate("Settings", "\346\226\260\346\230\265\347\247\260", nullptr));
        originPsw->setInputMask(QString());
        originPsw->setPlaceholderText(QApplication::translate("Settings", "\345\216\237\345\257\206\347\240\201", nullptr));
        newPsw->setInputMask(QString());
        newPsw->setPlaceholderText(QApplication::translate("Settings", "\346\226\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
