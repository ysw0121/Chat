#include "moments.h"
#include "ui_moments.h"
#include"user.h"
#include<QListWidget>
#include<QListWidgetItem>
#include<QMessageBox>
#include<QDebug>
#include<QList>
#include"like_and_comment.h"


int curCNT=0;

struct comment{
    QString sender;
    QString content;
};

struct moment{
    QString range;
    QString sender;
    QString text;
    QList<QString>likes;
    QList<comment>comments;//(格式直接做成phone+内容)
};
extern QList<moment>Moment;//全部的
QList<moment>cur;//当前用户的

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

extern USER succeed;//单独全局变量已登录的用户

extern QMap <QString,QString>corre;

moment chosen;



moments::moments(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moments)
{
    ui->setupUi(this);
    this->setWindowTitle("朋友圈");

    for(int i=0;i<Moment.size();i++){

        if(Moment[i].sender==succeed.phone){
           // cur<<Moment[i];
            QListWidgetItem *item;
            item=new QListWidgetItem;
            QString qs;
            qs=corre[Moment[i].sender]+"："+Moment[i].text+"\n谁点赞了：";
            for(int j=0;j<Moment[i].likes.size();j++)qs+=(corre[Moment[i].likes[j]]+"、");
            qs+="\n谁评论了：\n";
            for(int j=0;j<Moment[i].comments.size();j++){
                qs+=(corre[Moment[i].comments[j].sender]+"："+Moment[i].comments[j].content+"\n");
            }
            item->setText(QString(qs));
            item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
            item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可选中
            item->setCheckState(Qt::Unchecked);//默认 不选中状态
            ui->mainWind->addItem(item);
        }

       else  if(Moment[i].sender!=succeed.phone){

            for(int j=0;j<succeed.contact.size();j++){

                if(Moment[i].sender==succeed.contact[j]&&Moment[i].range=="1"){

                    QListWidgetItem *item;
                    item=new QListWidgetItem;
                    QString qs;
                    qs=corre[Moment[i].sender]+"："+Moment[i].text+"\n谁点赞了：";
                    for(int j=0;j<Moment[i].likes.size();j++)qs+=(corre[Moment[i].likes[j]]+"、");
                    qs+="\n谁评论了：\n";
                    for(int j=0;j<Moment[i].comments.size();j++){
                        qs+=(corre[Moment[i].comments[j].sender]+"："+Moment[i].comments[j].content+"\n");
                    }
                    item->setText(QString(qs));
                    item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                    item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可选中
                    item->setCheckState(Qt::Unchecked);//默认 不选中状态
                    ui->mainWind->addItem(item);
                }

            }
        }
    }
if(curCNT==0){

        for(int i=0;i<Moment.size();i++){
            if(Moment[i].sender==succeed.phone){
                cur<<Moment[i];
            }

            else  if(Moment[i].sender!=succeed.phone){
                 for(int j=0;j<succeed.contact.size();j++){
                     if(Moment[i].sender==succeed.contact[j]&&Moment[i].range=="1"){
                          cur<<Moment[i];
                     }
                 }
            }
        }

    curCNT=1;
}
}

moments::~moments()
{
    delete ui;
}

void moments::on_return_2_clicked()
{
    this->close();
    User *pic=new User;
    pic->show();
}


void moments::on_content_send_clicked()
{
    moment momt;
    QString content=ui->textEdit->toPlainText();

    if(content==""){
        QMessageBox::critical(this,tr("提示"),tr("不能发表空白的！"));
        return;
    }
    else if(content.indexOf(" ")!=-1){
        QMessageBox::critical(this,tr("提示"),tr("内容不能带空格！"));
        return;
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("请选择你的朋友圈可见范围");
        msgBox.setInformativeText("YesToAll:全部可见，NoToAll:仅自己可见");
        msgBox.setStandardButtons(QMessageBox::YesToAll | QMessageBox::NoToAll);
        int ret = msgBox.exec();
        switch(ret){
          case QMessageBox::YesToAll:{
              momt.range="1";
              break;
          }
          case QMessageBox::NoToAll:{
              momt.range="0";
          }
        }
       momt.sender=succeed.phone;
       momt.text=content;
       QListWidgetItem *item;
       item=new QListWidgetItem;
       item->setText(QString(corre[succeed.phone]+"："+content+"\n谁点赞了：\n谁评论了："));
       item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
       item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可选中
       item->setCheckState(Qt::Unchecked);//默认 不选中状态
       ui->mainWind->addItem(item);
       ui->textEdit->clear();
       Moment<<momt;
       cur<<momt;

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


    }
}


void moments::on_mainWind_doubleClicked(const QModelIndex &index)
{
    chosen=cur[index.row()];
    qDebug()<<index.row();
    this->close();
    like_and_comment *pic=new like_and_comment;
    pic->show();

}

