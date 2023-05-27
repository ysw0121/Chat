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
#include<QListWidget>
#include<QStringListModel>
#include<QLineEdit>
#include<QStringList>
#include<QDateTime>
#include<QMessageBox>

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
};extern QList<moment>Moment;

struct record{
    QString from;
    QString to;
    QString content;
};
extern QList <record>Record;

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


USER receiver;

QMap <QString,QString>corre;

User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    this->setWindowTitle("欢迎你，"+succeed.name);

    for(int i=0;i<list.size();i++){
        corre[list[i].phone]=list[i].name;
        qDebug()<<corre[list[i].phone];
    }
             for(int j=0;j<succeed.contact.size();j++){
                 QListWidgetItem *item;
                 item=new QListWidgetItem;
                 item->setText(QString(corre[succeed.contact[j]]));
                 item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                 item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可选中
                 item->setCheckState(Qt::Unchecked);//默认 不选中状态
                     //最后将初始化好的子项插入到listWidget控件中
                 ui->contactList->addItem(item);
         }

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

int cnt;

void User::on_contactList_doubleClicked(const QModelIndex &index)
{
    cnt=index.row();
    qDebug()<<cnt;
    ui->receiver->setText(index.data().toString());
   // receiver.name=index.data().toString();
    ui->chatWindow->clear();
    for(int i=0;i<Record.size();i++){
        if(Record[i].from==succeed.phone&&Record[i].to==succeed.contact[cnt]){
            QListWidgetItem *item;
            item=new QListWidgetItem;
            item->setText(QString(succeed.name+"： \n"+Record[i].content));
            item->setTextAlignment(Qt::AlignLeft);
            item->setCheckState(Qt::Unchecked);
            item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
            ui->chatWindow->addItem(item);
        }
        else  if(Record[i].to==succeed.phone&&Record[i].from==succeed.contact[cnt]){
            QListWidgetItem *item;
            item=new QListWidgetItem;
            item->setText(QString(corre[succeed.contact[cnt]]+"： \n"+Record[i].content));
            item->setTextAlignment(Qt::AlignLeft);
            item->setCheckState(Qt::Unchecked);
            item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
            ui->chatWindow->addItem(item);
        }
    }

}


void User::on_send_clicked()//       现在不允许聊天内容换行！！！！！！
{
    QString mess=ui->textEdit->toPlainText();
    QString rece=succeed.contact[cnt];
    if(rece!=""&&mess!=""){
        //QDateTime currentTime = QDateTime::currentDateTime();
        QListWidgetItem *item;
        item=new QListWidgetItem;
        item->setText(QString(succeed.name+"： \n"+mess));
        item->setTextAlignment(Qt::AlignLeft);
        item->setCheckState(Qt::Unchecked);
        item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
        ui->chatWindow->addItem(item);

        QFile file("chatrecord.txt");
        bool isok=file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
        QTextStream write(&file);
        write.setCodec("UTF-8");

        if(isok){
            write<< succeed.phone<<" "<<rece<<" "<<mess<<endl;//from to
        }
        else qDebug()<<"error";
        file.close();

        record re;
        re.from=succeed.phone;
        re.to=rece;
        re.content=mess;
        Record<<re;

        ui->textEdit->clear();
    }
    else if(rece==""){
        QMessageBox::critical(this,tr("警告"),tr("请选择你要发送的人"));return;
    }
    else if(mess=="")QMessageBox::critical(this,tr("警告"),tr("消息不能为空！"));
}

