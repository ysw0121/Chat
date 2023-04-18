#include "settings.h"
#include "ui_settings.h"
#include"question_edit.h"
#include<QButtonGroup>
#include<QFile>
#include<QTextStream>
#include<QDebug>
#include<QCheckBox>
#include"user.h"


Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle("设置");

}

Settings::~Settings()
{
    delete ui;
}

struct USER{
    QString name;
    QString phone;
    QString password;
    int name_permit;//是否通过昵称添加
    int phone_permit;//是否手机号添加
    int range;//朋友圈可见范围（无用了，朋友圈可见是对单条而言，不是用户）
    int verti_way;//加好友验证方式
    int succeed;//判断登录状态
};

extern QList <USER> list;
extern USER succeed;


void Settings::init(){
    if(succeed.name_permit==1){
        ui->name_permit->setCheckState(Qt::Checked);

    }
    else {
        ui->name_permit->setCheckState(Qt::Unchecked);
    }
}


void Settings::on_question_clicked(bool checked)
{
    if(checked){
        ui->no_certi->setCheckState(Qt::Unchecked);
        question_edit *pic;
        pic=new question_edit;
        this->close();
        pic->show();
    }
    else  ui->no_certi->setCheckState(Qt::Checked);
}

void Settings::buttonex(){
//    QButtonGroup *box1=new QButtonGroup;
//    box1->setExclusive(true);
//    box1->addButton(ui->all_can);
//    box1->addButton(ui->only_yourself);

    QButtonGroup *box2=new QButtonGroup;
    box2->setExclusive(true);
    box2->addButton(ui->no_certi);
    box2->addButton(ui->question);
}



void Settings::on_number_permit_clicked(bool checked)
{

}


void Settings::on_no_certi_clicked(bool checked)
{
    if(!checked){
        question_edit *pic=new question_edit;
        this->close();
        pic->show();
    }
    //else
}


void Settings::on_name_permit_clicked(bool checked)
{
    if(checked)succeed.name_permit=1,ui->name_permit->update();
    else succeed.name_permit=0,ui->name_permit->setCheckState(Qt::Unchecked);
}


void Settings::on_confirm_clicked()
{
    update();
    for(int i=0;i<list.size()-1;i++)if(succeed.phone==list[i].phone)list[i].name_permit=succeed.name_permit;
    //重写文件
    QFile file1("users.txt");
        if(file1.open(QIODevice::WriteOnly|QIODevice::Truncate)){
            QTextStream out(&file1);
            out.setCodec("UTF-8");
            for(int i=0;i<list.size()-1;i++){
            out<<QString(list[i].name)<<" "
              <<QString(list[i].phone)<<" "<<QString(list[i].password)<<" "<<list[i].name_permit<<" "
             <<list[i].phone_permit<<" "<<list[i].verti_way<<endl;
            }
            file1.flush();
            file1.close();
        }else{
            qDebug()<<file1.errorString()<<endl;
        }

        this->close();
        User *pic=new User;
        pic->show();
}

