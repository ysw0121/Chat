#include "answer.h"
#include "ui_answer.h"
#include<QMessageBox>
#include<QList>
#include<QMap>
#include<QDebug>
#include"newfriend.h"


struct application{
    QString from;
    QString to;//电话号表
    QString accepted;//1成功，0失败，2申请中
    QString answer;
};
extern QList<application>applyList;

struct USER{
    QString name;
    QString phone;
    QString password;
    int name_permit;//是否通过昵称添加
    int phone_permit;//是否手机号添加
    int verti_way;//加好友验证方式,1 无需验证
    int succeed;//是否登录状态下（可能用不上）
    QList<QString>contact;
    QString question;
};
extern QList <USER> list;

extern USER succeed;//单独全局变量已登录的用户
extern QMap <QString,QString>corre;
extern QList<USER>temp;
extern USER selected;



Answer::Answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Answer)
{
    ui->setupUi(this);
    this->setWindowTitle("申请");
    if(selected.verti_way==1)ui->question->setText("无需回答问题，直接申请");
    else{
        ui->question->setText(selected.question);
    }
}

Answer::~Answer()
{
    delete ui;
}

void Answer::on_send_clicked()
{
    if(selected.phone==succeed.phone){
        QMessageBox::critical(this,tr("提示"),tr("不能向自己申请！"));
        this->close();
        newFriend *pic=new newFriend;
        pic->show();
        return;
    }
    for(int i=0;i<succeed.contact.size();i++){
        if(selected.phone==succeed.contact[i]){
            QMessageBox::critical(this,tr("提示"),tr("您已添加过该用户，不可重复添加！"));
            this->close();
            newFriend *pic=new newFriend;
            pic->show();
            return;
        }
    }
    if(selected.verti_way==1){
        application app;
        app.from=succeed.phone;
        app.to=selected.phone;
        app.accepted="2";
        app.answer="";
        applyList<<app;
    }
    else{
        if(ui->answerEdit->text()==NULL){
            QMessageBox::critical(this,tr("提示"),tr("回答不能为空！"));
            return;
        }
        else if(ui->answerEdit->text().indexOf(" ")!=-1){
            QMessageBox::critical(this,tr("提示"),tr("回答不能带空格！"));
            return;
        }
        else{
            application app;
            app.from=succeed.phone;
            app.to=selected.phone;
            app.accepted="2";
            app.answer=ui->answerEdit->text();
            applyList<<app;
        }
    }

    QFile file("application.txt");
    bool isok=file.open(QIODevice::WriteOnly|QIODevice::Truncate);
     if(isok){
         QTextStream out(&file);
         out.setCodec("UTF-8");
         for(int i=0;i<applyList.size();i++){
             out<<applyList[i].from<<" "<<applyList[i].to<<" "<<applyList[i].accepted<<" "<<applyList[i].answer<<endl;
         }
     }
     else qDebug()<<"error";
    file.close();

    this->close();
    newFriend *pic=new newFriend;
    applyList.setSharable(true);
    pic->show();
}

