#include "widget.h"
#include "ui_widget.h"
#include"login.h"
#include"register.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Chat");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_login_clicked()
{
    this->close();
    login *pic=new login();
    pic->show();

}


void Widget::on_register_2_clicked()
{
    this->close();
    Register *pic=new Register();
    pic->show();

}




