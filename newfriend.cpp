#include "newfriend.h"
#include "ui_newfriend.h"
#include"user.h"
#include<QListWidget>
#include<QListWidgetItem>
#include<QList>
#include<QDebug>
#include<QMap>
#include<QMessageBox>
#include<QCheckBox>
#include"answer.h"




struct application{
    QString from;
    QString to;//电话号表示
    QString accepted;//1成功，0失败，2申请中
    QString answer;
};
extern QList<application>applyList;

extern QMap<QString,QString>corre;

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
QList<USER>temp;//搜索栏临时列表
QList<application>my_applicants;
USER selected;
USER applicant;



newFriend::newFriend(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newFriend)
{
    ui->setupUi(this);
    this->setWindowTitle("新的朋友");


    for(int i=0;i<list.size();i++){
        corre[list[i].phone]=list[i].name;
        qDebug()<<corre[list[i].phone];
    }

    ui->name_accord->setCheckState(Qt::Checked);

    for(int i=0;i<applyList.size();i++){

        application app=applyList[i];

        if(applyList[i].from==succeed.phone){
            QListWidgetItem *item;
            item=new QListWidgetItem;

             if(applyList[i].accepted=="2"){
                 item->setText(QString("请求添加 "+corre[applyList[i].to]+" 为好友                  申请中"));
                  item->setTextAlignment(Qt::AlignLeft);
                  item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                  item->setFlags(Qt::ItemIsEnabled);
                  item->setCheckState(Qt::Unchecked);//默认 不选中状态
                  ui->applyList->addItem(item);
                  my_applicants<<app;
             }
             if(app.accepted=="1"){
                 item->setText(QString("请求添加 "+corre[app.to]+" 为好友                  已通过"));
                  item->setTextAlignment(Qt::AlignLeft);
                  item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                  item->setFlags(Qt::ItemIsEnabled);
                  item->setCheckState(Qt::Unchecked);//默认 不选中状态
                  ui->applyList->addItem(item);
                  my_applicants<<app;
             }
             if(app.accepted=="0"){
                 item->setText(QString("请求添加 "+corre[app.to]+" 为好友                  被拒绝"));
                  item->setTextAlignment(Qt::AlignLeft);
                  item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                  item->setFlags(Qt::ItemIsEnabled);
                  item->setCheckState(Qt::Unchecked);//默认 不选中状态
                  ui->applyList->addItem(item);
                  my_applicants<<app;
             }

        }

        if(app.to==succeed.phone){
            QListWidgetItem *item;
            item=new QListWidgetItem;

             if(app.accepted=="2"){
                 item->setText(QString(corre[app.from]+" 请求添加你为好友                  申请中"));
                  item->setTextAlignment(Qt::AlignLeft);
                 item->setFlags(Qt::ItemIsUserCheckable);
                 item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                 item->setFlags(Qt::ItemIsEnabled);
                 item->setCheckState(Qt::Unchecked);//默认 不选中状态
                 ui->applyList->addItem(item);
                 my_applicants<<app;
             }
             if(app.accepted=="1"){
                 item->setText(QString(corre[app.from]+" 请求添加你为好友                  已通过"));
                  item->setTextAlignment(Qt::AlignLeft);
                  item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                  item->setFlags(Qt::ItemIsEnabled);
                  item->setCheckState(Qt::Unchecked);//默认 不选中状态
                  ui->applyList->addItem(item);
                  my_applicants<<app;
             }
             if(app.accepted=="0"){
                 item->setText(QString(corre[app.from]+" 请求添加你为好友                  已拒绝"));
                  item->setTextAlignment(Qt::AlignLeft);
                  item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                  item->setFlags(Qt::ItemIsEnabled);
                  item->setCheckState(Qt::Unchecked);//默认 不选中状态
                  ui->applyList->addItem(item);
                  my_applicants<<app;
             }

        }

    }

}

newFriend::~newFriend()
{
    delete ui;
}

void newFriend::on_return_2_clicked()
{
    this->close();
    User *pic=new User;
    pic->show();
}


void newFriend::on_name_accord_stateChanged(int arg1)
{
    if(arg1==Qt::CheckState::Checked){
        ui->phone_accord->blockSignals(true);
        ui->phone_accord->setCheckState(Qt::CheckState::Unchecked);
        ui->phone_accord->blockSignals(false);
    }
}


void newFriend::on_phone_accord_stateChanged(int arg1)
{
    if(arg1==Qt::CheckState::Checked){
        ui->name_accord->blockSignals(true);
        ui->name_accord->setCheckState(Qt::CheckState::Unchecked);
        ui->name_accord->blockSignals(false);
    }
}



void newFriend::on_go_clicked()
{
    ui->result->clear();
    temp.clear();
    if(ui->name_accord->checkState()==Qt::Unchecked&&ui->phone_accord->checkState()==Qt::Unchecked){
        QMessageBox::critical(this,tr("提示"),tr("请选择一种搜索方式！"));
    }
    if(ui->name_accord->checkState()==Qt::Checked&&ui->phone_accord->checkState()==Qt::Unchecked){
        QString res=ui->searchLine->text();
        int flag=0;
        for(int i=0;i<list.size();i++){
            if(list[i].name_permit==1&&list[i].name.indexOf(res)!=-1){
                QListWidgetItem *item;
                item=new QListWidgetItem;
                item->setText(QString(list[i].name));
                item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可选中
                item->setCheckState(Qt::Unchecked);//默认 不选中状态
                    //最后将初始化好的子项插入到listWidget控件中
                ui->result->addItem(item);
                temp<<list[i];
                flag=1;
            }
        }
        if(flag==0)QMessageBox::information(this,tr(""),tr("查无结果，可能输入错误或对方设置不可被查找"));
    }


    if(ui->name_accord->checkState()==Qt::Unchecked&&ui->phone_accord->checkState()==Qt::Checked){
        QString res=ui->searchLine->text();
        int flag=0;
        for(int i=0;i<list.size();i++){
            if(list[i].phone_permit==1&&list[i].phone.indexOf(res)!=-1){
                QListWidgetItem *item;
                item=new QListWidgetItem;
                item->setText(QString(list[i].name));
                item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
                item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可选中
                item->setCheckState(Qt::Unchecked);//默认 不选中状态
                ui->result->addItem(item);
                temp<<list[i];
                flag=1;
            }
        }
        if(flag==0)QMessageBox::information(this,tr(""),tr("查无结果，可能输入错误或对方设置不可被查找"));
    }

}



void newFriend::on_result_doubleClicked(const QModelIndex &index)
{
    selected=temp[index.row()];
    this->close();
    Answer*pic=new Answer;
    pic->show();
}





void newFriend::on_applyList_doubleClicked(const QModelIndex &index)
{
    application appli=my_applicants[index.row()];
    if(appli.accepted=="1"||appli.accepted=="0")return;

    if(appli.to==succeed.phone&&appli.accepted=="2"){
        QMessageBox msgBox;
          msgBox.setText("你的问题是："+succeed.question+"\n他的回答是："+appli.answer+"\n是否接受申请？");
          msgBox.setStandardButtons(QMessageBox::Ok| QMessageBox::No);
          int ret = msgBox.exec();

          switch(ret){
          case QMessageBox::Ok:{

              ui->applyList->item(index.row())->setText(QString(corre[appli.from]+" 请求添加你为好友                  已通过"));
              succeed.contact<<appli.from;
              for(int i=0;i<list.size();i++){
                  if(list[i].phone==appli.from){
                      list[i].contact<<succeed.phone;
                  }
              }
              for(int i=0;i<list.size();i++)if(list[i].phone==succeed.phone)list[i]=succeed;
              QFile file("contact.txt");
              bool isok=file.open(QIODevice::WriteOnly|QIODevice::Truncate);
               if(isok){
                   QTextStream out(&file);
                   out.setCodec("UTF-8");
                   for(int i=0;i<list.size();i++){
                       for(int j=0;j<list[i].contact.size();j++)out<<list[i].contact[j]<<" ";
                       out<<endl;
                   }
               }
               else qDebug()<<"error";
              file.close();
              for(int i=0;i<applyList.size();i++){
                  if(applyList[i].from==appli.from&&applyList[i].to==succeed.phone){
                      applyList[i].accepted="1";
                  }
                  if(applyList[i].to==appli.from&&applyList[i].from==succeed.phone){
                      applyList[i].accepted="1";
                  }
              }
              QFile file1("application.txt");
              bool isok1=file1.open(QIODevice::WriteOnly|QIODevice::Truncate);
               if(isok1){
                   QTextStream out(&file1);
                   out.setCodec("UTF-8");
                   for(int i=0;i<applyList.size();i++){
                       out<<applyList[i].from<<" "<<applyList[i].to<<" "<<applyList[i].accepted<<" "<<applyList[i].answer<<endl;
                   }
               }
               else qDebug()<<"error";
              file1.close();
              break;
          }

          case QMessageBox::No:{

              ui->applyList->item(index.row())->setText(QString(corre[appli.from]+" 请求添加你为好友                  已拒绝"));

              for(int i=0;i<applyList.size();i++){
                  if(applyList[i].from==appli.from&&applyList[i].to==succeed.phone){
                      applyList[i].accepted="0";
                  }
              }
              QFile file2("application.txt");
              bool isok2=file2.open(QIODevice::WriteOnly|QIODevice::Truncate);
               if(isok2){
                   QTextStream out(&file2);
                   out.setCodec("UTF-8");
                   for(int i=0;i<applyList.size();i++){
                       out<<applyList[i].from<<" "<<applyList[i].to<<" "<<applyList[i].accepted<<" "<<applyList[i].answer<<endl;
                   }
               }
               else qDebug()<<"error";
              file2.close();
              break;
          }
          default:break;
          }
    }

}

