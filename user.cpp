#include "user.h"
#include "ui_user.h"
#include"settings.h"
#include"widget.h"
#include"login.h"
#include"moments.h"
#include"newfriend.h"
#include"chatrecord.h"
#include<QMap>
#include<QList>
#include<QDebug>
#include<QStringListModel>
#include<QLineEdit>
#include<QStringList>

struct USER{
    QString name;
    QString phone;
    QString password;
    int name_permit;//是否通过昵称添加
    int phone_permit;//是否手机号添加
    int range;//朋友圈可见范围
    int verti_way;//加好友验证方式
    int succeed;//是否登录状态下（可能用不上）
};

extern QList <USER> list;

extern USER succeed;//单独全局变量已登录的用户
USER receiver;

QMap <QString,QString>corre;

User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    this->setWindowTitle("欢迎你，"+succeed.name);
    QStringList strlist;

    for(int i=0;i<list.size()-1;i++){
        corre[list[i].phone]=list[i].name;
        qDebug()<<corre[list[i].phone];
       //strlist<<list[i].name;//test
    }
    QFile file("contact.txt");
     bool isok = file.open(QIODevice::ReadOnly|QIODevice::Text);
     QString head;
     if(isok==true){
         QTextStream in(&file);
         while(!file.atEnd()){
         head=in.readLine();
         strlist=head.split(" ");
         if(strlist[0]==succeed.phone){
             for(int j=1;j<strlist.size();j++){
                 strlist[j]=corre[strlist[j]];
             }
         }
         }
     }
    QStringListModel *model;
    model=new QStringListModel();
    model->setStringList(strlist);
    ui->contactList->setModel(model);
    ui->contactList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    file.close();
}

User::~User()
{
    delete ui;
}


void User::on_setting_clicked()
{
    this->close();
    Settings *pic=new Settings;
    pic->show();
}


void User::on_exit_clicked()
{
    this->close();
    Widget *pic=new Widget;
    pic->show();

}


void User::on_moments_clicked()
{
    this->close();
    moments *pic=new moments;
    pic->show();
}


void User::on_new_friends_clicked()
{
    this->close();
    newFriend *pic=new newFriend;
    pic->show();
}


void User::on_my_history_clicked()
{
    this->close();
    chatRecord *pic=new chatRecord;
    pic->show();

}



void User::on_contactList_doubleClicked(const QModelIndex &index)
{
    ui->receiver->setText(index.data().toString());
    receiver.name=index.data().toString();
}


void User::on_send_clicked()
{

}

