#include "login.h"
#include "ui_login.h"
#include"widget.h"
#include <QFile>
#include <QHBoxLayout>
#include <QPushButton>
#include"user.h"
#include"register.h"
#include<QMessageBox>
#include<QDebug>
#include<QList>
#include"user_info.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("欢迎你");
}

login::~login()
{
    delete ui;
}


extern QList<moment>Moment;
extern QList <USER> list;
USER succeed;


void login::on_Return_clicked()
{
    this->close();
    Widget *pic=new Widget;
    pic->show();
}

void login::on_show_password_clicked(bool checked)
{
    if(checked)ui->password->setEchoMode(QLineEdit::Normal);
    else ui->password->setEchoMode(QLineEdit::Password);
}


void login::on_start_clicked()
{
    int flag=0;
    for(int i=0;i<list.size();i++){
        if(ui->account->text()==list[i].phone&&ui->password->text()==list[i].password)flag=1,succeed=list[i];
    }
    //temp state
    if(flag==1){
        qDebug()<<succeed.name<<" "<<succeed.question;
        this->close();
        User *pic=new User;
        pic->show();
    }
   else{
         QMessageBox::critical(this,tr("错误"),tr("账号或密码错误，或者检查您是否注册过！"));
    }
}

