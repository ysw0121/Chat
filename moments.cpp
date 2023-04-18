#include "moments.h"
#include "ui_moments.h"
#include"user.h"


moments::moments(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moments)
{
    ui->setupUi(this);
    this->setWindowTitle("朋友圈");
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

