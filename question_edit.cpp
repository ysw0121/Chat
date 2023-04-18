#include "question_edit.h"
#include "ui_question_edit.h"
#include"settings.h"
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


