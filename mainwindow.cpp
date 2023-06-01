#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"game_login.h"
#include"game_register.h"
#include<QTimer>


extern QTimer*tim;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("欢迎");

}

MainWindow::~MainWindow()
{
    if (tim){
            if (tim->isActive() == true){
                tim->stop();
            }
            delete tim;
            tim= nullptr;
        }

    delete ui;
}


void MainWindow::on_login_clicked()
{
    this->close();
   game_login *pic=new game_login();
    pic->show();
}


void MainWindow::on_register_2_clicked()
{
    this->close();
    game_Register*pic=new game_Register();
    pic->show();
}

