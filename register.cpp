#include "register.h"
//#include "ui_register.h"
#include"login.h"
#include"user.h"
#include<QTextStream>
#include <ui_register.h>
#include"widget.h"
#include <QPainter>
#include <QStyleOption>
#include <QLineEdit>
#include <QTime>
#include <QChar>
#include <QDebug>
#include <QLabel>
#include <QString>
#include <QMessageBox>
#include <QByteArray>
#include <QMouseEvent>
#include<QMap>
#include<QFile>
#include<QFileDialog>
#include<QList>
#include<QFont>

Register::Register(QWidget *parent) :
    QDialog(parent),verti(QString()),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    verti=generateRandomNumber();
    this->setWindowTitle("开始注册");

}

Register::~Register()
{
    delete ui;
}

struct moment{
    int range;
    QString text;
    QList<QString>likes;
    QList<QString>comments;//(格式直接做成name+内容)
};

struct USER{
    QString name;
    QString phone;
    QString password;
    int name_permit;//是否通过昵称添加
    int phone_permit;//是否手机号添加
    int verti_way;//加好友验证方式
    int succeed;//是否登录状态下（可能用不上）
    QList<QString>contact;

    QString question;
};

extern QList <USER> list;
extern QList<moment>Moment;
extern USER succeed;//单独全局变量已登录的用户
USER u;

void Register::on_Return2_clicked(){
    this->close();
    Widget *pic=new Widget();
    pic->show();

}

void Register::on_ShowPassword2_clicked(bool checked){
    if(checked){
        ui->Password->setEchoMode(QLineEdit:: Normal);
        ui->ReconfirmPassword->setEchoMode(QLineEdit:: Normal);
    }
    else{
        ui->Password->setEchoMode(QLineEdit:: Password);
        ui->ReconfirmPassword->setEchoMode(QLineEdit:: Password);
    }
}


QString Register::generateRandomNumber()
{
    QString certi;
    certi.clear();
    for(int i = 0;i < 4;++i) {
                certi += QString::number(qrand()%10);
     }

    return certi;

}

void Register::paintEvent(QPaintEvent*){
    for(int i=0;i<1;i++){
    QPainter  painter(this);
    QPen pen;

    for(int i = 0;i < 100;i++) {
          pen = QPen(QColor(qrand()%256,qrand()%256,qrand()%256));
          painter.setPen(pen);
          painter.drawPoint(qrand()%100+415,qrand()%30+285);
        }
        //画线
        for(int i = 0;i <5;++i) {
            pen = QPen(QColor(qrand()%256,qrand()%256,qrand()%256));
            painter.setPen(pen);
            painter.drawLine(qrand()%100+420,qrand()%30+285,qrand()%100+440,qrand()%30+295);
        }

        pen = QPen(QColor(255,0,0,100));
        QFont font("楷体",16,QFont::Bold,true);
        painter.setFont(font);
        painter.setPen(pen);
        //绘画字
        for(int i = 0;i < 4;++i) {
           painter.drawText(409+30*i,280,30,40,Qt::AlignCenter, QString(verti[i]));
        }

    }
}

void Register::mousePressEvent(QMouseEvent *event) {
    QRect eventRegion1(400,275,120,40);
    if((event->button()==Qt::LeftButton)&&eventRegion1.contains( event->pos())){
    verti=generateRandomNumber();
    update();

    QString  vertify=ui->identify->text();

    if(vertify!=getVerti()){
        ui->vertifyCorrect->setText("验证码错误！");
        ui->vertifyCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }

   else if(vertify.size()==0){
        ui->vertifyCorrect->setText("验证码不能为空！");
        ui->vertifyCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }
    else if(vertify==getVerti()&&verti==getVerti()) {
        ui->vertifyCorrect->setText("验证码正确！");
        ui->vertifyCorrect->setStyleSheet("color: rgb(0,255, 25);");
    }

    }
}


void Register::on_nickname_textEdited(const QString &arg1)
{
    QString name=ui->nickname->text();
    if(name.size()==0){

        ui->nameEmpty->setText("昵称不能为空!");
         ui->nameEmpty->setStyleSheet("color: rgb(255, 78, 25);");

    }
    else if(name.indexOf(" ")==-1&&name.indexOf("-")==-1){
        ui->nameEmpty->setText("昵称符合");
         ui->nameEmpty->setStyleSheet("color: rgb(0, 255, 25);");
    }
    else {
        ui->nameEmpty->setText("昵称不能含空格或 - 号!");
         ui->nameEmpty->setStyleSheet("color: rgb(255, 78, 25);");
    }
}


void Register::on_phone_textEdited(const QString &arg1)
{
    QString  phone=ui->phone->text();
    QRegExp rx_phone;
    rx_phone.setPatternSyntax(QRegExp::RegExp);
    rx_phone.setPattern(QString("^[1-9][0-9]{10}"));
    int flag=0;

    for(int i=0;i<list.size()-1;i++){
        if(phone==list[i].phone){
            flag=1;
        }
    }
    if(flag==1){
        ui->phoneCorrect->setText("该手机号已被注册,\n不可重复注册！");
        ui->phoneCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }
else{
    if(phone.size()==0){
        ui->phoneCorrect->setText("手机号不能为空！");
        ui->phoneCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }

    else if(!rx_phone.exactMatch(phone)){
        ui->phoneCorrect->setText("手机号应为11位数字，不能0开头！");
        ui->phoneCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }
    else if(rx_phone.exactMatch(phone)){
        ui->phoneCorrect->setText("手机号正确！");
        ui->phoneCorrect->setStyleSheet("color: rgb(0,255,25);");
    }
}
}


void Register::on_Password_textEdited(const QString &arg1)
{
    QString  password1=this->ui->Password->text();
     QRegExp rx_psw;
      rx_psw.setPatternSyntax(QRegExp::RegExp);
      rx_psw.setCaseSensitivity(Qt::CaseSensitive);
      rx_psw.setPattern(QString("^(?![0-9]+$)(?![a-z]+$)(?![A-Z]+$)(?![A-Z0-9]+$)(?![a-zA-Z]+$)(?![a-z0-9]+$)[a-zA-Z0-9]{8,}"));
      if(password1.size()==0){
          ui->pswCorrect->setText("密码不能为空！");
          ui->pswCorrect->setStyleSheet("color: rgb(255, 78, 25);");
      }
      else if(!rx_psw.exactMatch(password1)){
          ui->pswCorrect->setText("密码格式错误\n应由至少8位的大小写字母和数字组成\n不允许特殊字符！");
          ui->pswCorrect->setStyleSheet("color: rgb(255, 78, 25);");
      }
      else if(rx_psw.exactMatch(password1)){
          ui->pswCorrect->setText("密码符合格式！");
          ui->pswCorrect->setStyleSheet("color: rgb(0,255,25);");
      }

}


void Register::on_ReconfirmPassword_textEdited(const QString &arg1)
{
     QString  password1=this->ui->Password->text();
      QString  password2=this->ui->ReconfirmPassword->text();
      if(password2.size()==0){
          ui->pswDiffer->setText("二次输入不能为空！");
          ui->pswDiffer->setStyleSheet("color: rgb(255, 78, 25);");
      }
      else if(password2!=password1){
          ui->pswDiffer->setText("前后输入要一致！");
          ui->pswDiffer->setStyleSheet("color: rgb(255, 78, 25);");
      }
      else if(password2==password1){
          ui->pswDiffer->setText("符合要求");
          ui->pswDiffer->setStyleSheet("color: rgb(0,255, 25);");
      }
}


void Register::on_identify_textEdited(const QString &arg1)
{
    //QString certi=getVerti();
   //QString certi=ui->vertify->text();
    QString  vertify=ui->identify->text();

    if(vertify!=getVerti()){
        ui->vertifyCorrect->setText("验证码错误！");
        ui->vertifyCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }

   else if(vertify.size()==0){
        ui->vertifyCorrect->setText("验证码不能为空！");
        ui->vertifyCorrect->setStyleSheet("color: rgb(255, 78, 25);");
    }
    else if(vertify==getVerti()&&verti==getVerti()) {
        ui->vertifyCorrect->setText("验证码正确！");
        ui->vertifyCorrect->setStyleSheet("color: rgb(0,255, 25);");
    }

}

void Register::on_RegistButton_clicked()
{
    if(ui->phoneCorrect->text()=="手机号正确！"&&ui->nameEmpty->text()=="昵称符合"
            &&ui->pswCorrect->text()=="密码符合格式！"&&ui->pswDiffer->text()=="符合要求"&&
            ui->vertifyCorrect->text()=="验证码正确！"){

        QFile file1("users.txt");
            if(file1.open(QIODevice::WriteOnly|QIODevice::Append)){
                QTextStream out(&file1);
                out.setCodec("UTF-8");
                out<<QString(ui->nickname->text())<<" "
                  <<QString(ui->phone->text())<<" "<<QString(ui->Password->text())<<" 1 1 1"<<endl;
                //file1.flush();
                file1.close();
            }else{
                qDebug()<<file1.errorString()<<endl;
            }


            u.name=ui->nickname->text(); u.phone=ui->phone->text(); u.password=ui->Password->text();
            u.verti_way=u.name_permit=u.phone_permit=1;
            u.contact<<"12312345678"<<"22222222222";
            list[1].contact<<u.phone;
            list[2].contact<<u.phone;
            list<<u;
            u.contact.clear();

            for(int i=0;i<list.size();i++)qDebug()<<list[i].name;

            succeed=list[list.size()-1];

            QFile file("contact.txt");
            if(file.open(QIODevice::WriteOnly|QIODevice::Truncate)){
                QTextStream out(&file);
                out.setCodec("UTF-8");
                for(int i=0;i<list.size();i++){
                    for(int j=0;j<list[i].contact.size();j++){
                        out<<list[i].contact[j]<<" ";
                    }
                   out<<endl;
                }
            }
            //file.flush();
            file.close();

        QMessageBox::information(this,tr(""),tr("注册成功！"));
        this->close();
        User *pic=new User;
        pic->show();
    }

    else{
        QMessageBox::critical(this,tr("警告"),tr("信息不符合规范，请改正！"));
    }

}
