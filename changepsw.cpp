#include "changepsw.h"
#include "ui_changepsw.h"

changePsw::changePsw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePsw)
{
    ui->setupUi(this);
}

changePsw::~changePsw()
{
    delete ui;
}
