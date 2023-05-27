#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>


namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();



private slots:

    void on_Return_clicked();


    void on_show_password_clicked(bool checked);

    void on_start_clicked();

private:
    Ui::login *ui;

};

#endif // LOGIN_H
