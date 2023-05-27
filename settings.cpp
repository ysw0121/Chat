#include "settings.h"
#include "ui_settings.h"
#include"question_edit.h"
#include<QButtonGroup>
#include<QFile>
#include<QTextStream>
#include<QDebug>
#include<QCheckBox>
#include"user.h"
#include<QList>
#include<QMessageBox>




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
extern USER succeed;


Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle("设置");

    if(succeed.name_permit==1){
        ui->name_permit->setCheckState(Qt::Checked);
    }
    else{
        ui->name_permit->setCheckState(Qt::Unchecked);
    }

    if(succeed.phone_permit==1){
        ui->number_permit->setCheckState(Qt::Checked);
    }
    else{
        ui->number_permit->setCheckState((Qt::Unchecked));
    }

    if(succeed.verti_way==1){
        ui->no_certi->setCheckState((Qt::Checked));
        ui->question->setCheckState(Qt::Unchecked);
    }
    else{
        ui->no_certi->setCheckState((Qt::Unchecked));
        ui->question->setCheckState(Qt::Checked);
    }
}

Settings::~Settings()
{
    delete ui;
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
    if(checked)succeed.phone_permit=1;
    else succeed.phone_permit=0;
}


void Settings::on_no_certi_clicked(bool checked)
{
    if(!checked){
        succeed.verti_way=0;
        question_edit *pic=new question_edit;
        this->close();
        pic->show();
    }
    else succeed.verti_way=1,succeed.question="";
}


void Settings::on_name_permit_clicked(bool checked)
{
    if(checked)succeed.name_permit=1;
    else succeed.name_permit=0;
}


void Settings::on_confirm_clicked()
{
    QString newname=ui->newName->text();
    QString psw=ui->originPsw->text();
    QString newpsw=ui->newPsw->text();

    int flag=1;

    QRegExp rx_psw;
     rx_psw.setPatternSyntax(QRegExp::RegExp);
     rx_psw.setCaseSensitivity(Qt::CaseSensitive);
     rx_psw.setPattern(QString("^(?![0-9]+$)(?![a-z]+$)(?![A-Z]+$)(?![A-Z0-9]+$)(?![a-zA-Z]+$)(?![a-z0-9]+$)[a-zA-Z0-9]{8,}"));

    if(newname.indexOf(" ")!=-1||newname.indexOf("-")!=-1){
        QMessageBox::critical(this,tr("警告"),tr("昵称不允许有空格或 - 号"));
        flag=0;
    }
    else if(newname!="")succeed.name=newname,flag=1;
    if(psw!=succeed.password&&psw!="")QMessageBox::critical(this,tr("警告"),tr("原密码不正确，请改正！")),flag=0;
    if(psw==succeed.password){
        if(newpsw=="")QMessageBox::critical(this,tr("警告"),tr("新密码不能为空，请改正！")),flag=0;
        else if(!rx_psw.exactMatch(newpsw)){
          QMessageBox::critical(this,tr("警告"),tr("新密码应由至少8位的大小写字母和数字组成，不允许特殊字符，请改正！"));
          flag=0;
        }
        else if(rx_psw.exactMatch(newpsw)){
           succeed.password=newpsw;
           flag=1;
        }
    }
if(flag==1){
    for(int i=0;i<list.size();i++){
        if(succeed.phone==list[i].phone){
           list[i]=succeed;
        }
    }
    //重写文件
    QFile file1("users.txt");
        if(file1.open(QIODevice::WriteOnly|QIODevice::Truncate)){
            QTextStream out(&file1);
            out.setCodec("UTF-8");
            for(int i=0;i<list.size();i++){
            out<<QString(list[i].name)<<" "
              <<QString(list[i].phone)<<" "<<QString(list[i].password)<<" "<<list[i].name_permit<<" "
             <<list[i].phone_permit<<" "<<list[i].verti_way<<endl;
            }
            //file1.flush();
            file1.close();
        }else{
            qDebug()<<file1.errorString()<<endl;
        }

    QFile file2("question.txt");
    if(file2.open(QIODevice::WriteOnly|QIODevice::Truncate)){
        QTextStream out(&file2);
        out.setCodec("UTF-8");
        for(int i=0;i<list.size();i++){
            if(list[i].question!="")out<<list[i].phone<<" "<<list[i].question<<endl;
        }
        file2.close();
    }else{
        qDebug()<<file1.errorString()<<endl;
    }

        update();
        this->close();
        User *pic=new User;
        pic->show();
}
}

