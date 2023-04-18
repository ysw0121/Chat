#include "newfriend.h"
#include "ui_newfriend.h"
#include"user.h"

newFriend::newFriend(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newFriend)
{
    ui->setupUi(this);
    this->setWindowTitle("新的朋友");
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

