#include "chatrecord.h"
#include "ui_chatrecord.h"
#include"user.h"

chatRecord::chatRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatRecord)
{
    ui->setupUi(this);
    this->setWindowTitle("聊天记录");
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

