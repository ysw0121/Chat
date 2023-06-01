#include "question_edit.h"
#include "ui_question_edit.h"
#include"settings.h"
#include<QMessageBox>
#include<QList>
#include"user_info.h"



extern QMap <QString,QString>corre;

extern QList <USER> list;

extern USER succeed;//单独全局变量已登录的用户

question_edit::question_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question_edit)
{
    ui->setupUi(this);
    this->setWindowTitle("编辑问题");
}

question_edit::~question_edit()
{
    delete ui;
}

void question_edit::on_cancel_clicked()
{
    this->close();
    Settings *pic=new Settings;
    pic->show();

}



void question_edit::on_sure_clicked()
{
    int flag=1;
    QString que=ui->question->text();
    if(que==NULL)QMessageBox::critical(this,tr("提示"),tr("设置的问题不能为空！")),flag=0;
    else {
        if(que.indexOf(" ")!=-1)QMessageBox::critical(this,tr("警告"),tr("问题中不能有空格！")),flag=0;
        else {
            succeed.question=que;
            succeed.verti_way=0;
        }
    }
    for(int i=0;i<list.size();i++){
        if(list[i].phone==succeed.phone)list[i]=succeed;
    }

    if(flag==1){
        this->close();
        Settings *pic=new Settings;
         pic->show();
    }
}

