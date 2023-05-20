#include "widget.h"
#include "ui_widget.h"
#include"login.h"
#include"register.h"
#include<QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Chat");
    QMessageBox msgBox;
    msgBox.setWindowTitle("用户使用准则声明");
    msgBox.setText("您承诺不能在本程序的所有的文本框里加入空格和换行，\n否则将会带来意想不到的后果，严重者或将导致您的数据丢失或程序崩溃……");
    msgBox.setInformativeText("是否接受条款继续？");
    msgBox.setStandardButtons(QMessageBox::Ok| QMessageBox::No );
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
    switch(ret){
    case QMessageBox::Ok:
        break;
    case QMessageBox::No:{
         exit(-1);
       }
    }
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




