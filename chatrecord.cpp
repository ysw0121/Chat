#include "chatrecord.h"
#include "ui_chatrecord.h"
#include"user.h"
#include<QMessageBox>
#include<QListWidgetItem>
#include<QListWidget>
#include<QMap>
#include<QDebug>


struct record{
    QString from;
    QString to;
    QString content;
};
extern QList <record>Record;


extern QMap <QString,QString>corre;
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


chatRecord::chatRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatRecord)
{
    ui->setupUi(this);
    this->setWindowTitle("聊天记录");

    for(int i=0;i<list.size();i++){
        corre[list[i].phone]=list[i].name;
        qDebug()<<corre[list[i].phone];
    }

    ui->accor_friend->setCheckState(Qt::Checked);
}

chatRecord::~chatRecord()
{
    delete ui;
}

void chatRecord::on_return_2_clicked()
{
    this->close();
    User *pic=new User;
    pic->show();
}


void chatRecord::on_accor_friend_stateChanged(int arg1)
{
    if(arg1==Qt::CheckState::Checked){
        ui->accor_content->blockSignals(true);
        ui->accor_content->setCheckState(Qt::CheckState::Unchecked);
        ui->accor_content->blockSignals(false);
    }
}


void chatRecord::on_accor_content_stateChanged(int arg1)
{
    if(arg1==Qt::CheckState::Checked){
        ui->accor_friend->blockSignals(true);
        ui->accor_friend->setCheckState(Qt::CheckState::Unchecked);
        ui->accor_friend->blockSignals(false);
    }
}


void chatRecord::on_search_clicked()
{
    ui->recordList->clear();
    if(ui->accor_content->checkState()==Qt::CheckState::Unchecked&&ui->accor_friend->checkState()==Qt::CheckState::Unchecked){
        QMessageBox::critical(this,tr("提示"),tr("请选择您的搜索方式"));
    }
    //根据内容查找
    else if(ui->accor_content->checkState()==Qt::CheckState::Checked&&ui->accor_friend->checkState()==Qt::CheckState::Unchecked){
        QString cur=ui->recordSearch->text();
        int flag=0;
        for(int i=0;i<Record.size();i++){
            if(Record[i].from==succeed.phone||Record[i].to==succeed.phone){
                if(Record[i].content.indexOf(cur)!=-1){
                    QListWidgetItem *item;
                    item=new QListWidgetItem;
                    item->setText(QString(corre[Record[i].from]+"-to-"+corre[Record[i].to]+":  \n"+Record[i].content));
                    item->setTextAlignment(Qt::AlignLeft);
                    item->setCheckState(Qt::Unchecked);
                    ui->recordList->addItem(item);
                    flag=1;
                }
            }
        }
        if(flag==0){
            QMessageBox::information(this,tr(""),tr("无查询结果"));
        }
    }
    //根据好友查找
    else if(ui->accor_content->checkState()==Qt::CheckState::Unchecked&&ui->accor_friend->checkState()==Qt::CheckState::Checked){
        QString cur=ui->recordSearch->text();
        int flag=0;
        for(int i=0;i<Record.size();i++){
            if(Record[i].from==succeed.phone||Record[i].to==succeed.phone){
                if(corre[Record[i].to].indexOf(cur)!=-1||corre[Record[i].from].indexOf(cur)!=-1){
                    QListWidgetItem *item;
                    item=new QListWidgetItem;
                    item->setText(QString(corre[Record[i].from]+" to "+corre[Record[i].to]+":  \n"+Record[i].content));
                    item->setTextAlignment(Qt::AlignLeft);
                    item->setCheckState(Qt::Unchecked);
                    ui->recordList->addItem(item);
                    flag=1;
                }
            }
        }
        if(flag==0){
            QMessageBox::information(this,tr(""),tr("无查询结果"));
        }
    }

}

