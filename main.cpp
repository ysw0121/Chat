#include "widget.h"
#include<QDebug>
#include <QApplication>
#include<QTextStream>
#include<QFile>
#include"login.h"


struct USER{
    QString name;
    QString phone;
    QString password;
    int name_permit;//是否通过昵称添加，1为是
    int phone_permit;//是否手机号添加，1为是
    int range;//朋友圈可见范围，1为全体可见//
    int verti_way;//加好友验证方式，1为无需验证
    int succeed;//判断登录状态，1为登录中
};
QList<USER>list;
//extern USER succeed;

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5,12,12))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QFile file("./users.txt");
     bool isok = file.open(QIODevice::ReadOnly|QIODevice::Text);
     if(isok==true){
         QTextStream in(&file);
         QString s1,s2,s3;
         int f1,f2,f4;
            while(!in.atEnd()){
                in.setCodec("UTF-8");
                in>>s1>>s2>>s3>>f1>>f2>>f4;
                USER user;
                user.name=s1;user.phone=s2;user.password=s3;
                user.name_permit =f1;user.phone_permit=f2;
                user.verti_way=f4;
                user.succeed=0;
                list<<user;
            }
       for(int i=0;i<list.size()-1;i++)qDebug()<<list[i].name<<list[i].name_permit;
     }
     else qDebug()<<"error";


    QApplication a(argc, argv);
    Widget w;
    w.show();//qDebug()<<succeed.name;
    file.close();
    return a.exec();
}
