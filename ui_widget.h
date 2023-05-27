/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QPushButton *login;
    QPushButton *register_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(626, 518);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(15, 9, 602, 500));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        login = new QPushButton(frame);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(100, 330, 131, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        login->setFont(font);
        login->setMouseTracking(false);
        register_2 = new QPushButton(frame);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setGeometry(QRect(370, 330, 141, 61));
        register_2->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 110, 281, 111));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 601, 501));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/back/backg.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        login->raise();
        register_2->raise();
        label->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        register_2->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:600;\">\346\254\242\350\277\216\346\235\245\345\210\260\350\201\212\345\244\251\345\256\244</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
