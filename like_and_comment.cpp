#include "like_and_comment.h"
#include "ui_like_and_comment.h"
#include<QListWidget>
#include<QListWidgetItem>
#include<QMessageBox>
#include<QDebug>
#include<QList>
#include"moments.h"
#include"user_info.h"



extern QList<moment>Moment;//全部的
extern QList<moment>cur;//当前用户的

extern QList <USER> list;

extern USER succeed;//单独全局变量已登录的用户

extern QMap <QString,QString>corre;

extern moment chosen;




like_and_comment::like_and_comment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::like_and_comment)
{
    ui->setupUi(this);
    this->setWindowTitle("点赞评论");

    for(int i=0;i<chosen.likes.size();i++){
        if(chosen.likes[i]==succeed.phone)ui->like->setCheckState(Qt::Checked);
    }

}

like_and_comment::~like_and_comment()
{
    delete ui;
}

void like_and_comment::on_sure_clicked()
{
    if(ui->like->checkState()==Qt::Unchecked&&ui->comment->text()==""){
        this->close();
        moments *pic=new moments;
        pic->show();
    }


    if(ui->like->checkState()==Qt::Checked){
        chosen.likes<<succeed.phone;
    }

    QString com=ui->comment->text();
    if(com!=""){
        if(com.indexOf(" ")!=-1){
        QMessageBox::critical(this,tr("警告"),tr("评论中不要带空格"));
        return;
        }

        else{
            comment cc;
            cc.sender=succeed.phone;
            cc.content=com;
            chosen.comments<<cc;
        }

        for(int i=0;i<Moment.size();i++){
            if(Moment[i].text==chosen.text)Moment[i]=chosen;
        }
        for(int i=0;i<cur.size();i++){
            if(cur[i].text==chosen.text)cur[i]=chosen;
        }

        QFile file("moments.txt");
        bool isok=file.open(QIODevice::WriteOnly|QIODevice::Truncate);
         if(isok){
             QTextStream out(&file);
             out.setCodec("UTF-8");
             for(int i=0;i<Moment.size();i++){
                 out<<Moment[i].range<<" "<<Moment[i].sender<<" "<<Moment[i].text<<endl;
                 for(int j=0;j<Moment[i].likes.size();j++)out<<Moment[i].likes[j]<<" ";
                 out<<endl;
                 for(int j=0;j<Moment[i].comments.size();j++){
                     out<<Moment[i].comments[j].sender<<" "<<Moment[i].comments[j].content<<" ";
                 }
                 out<<endl;
             }
         }
         else qDebug()<<"error";
        file.close();
        Moment.setSharable(true);
        cur.setSharable(true);

        ui->comment->clear();
        this->close();
        moments *pic=new moments;
        pic->show();

    }
}

