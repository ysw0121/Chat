#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include<QFrame>
namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    QString getVerti() { return verti; }

private slots:
    void on_Return2_clicked();

    void on_ShowPassword2_clicked(bool checked);

    QString generateRandomNumber();

    void paintEvent(QPaintEvent*);

    void mousePressEvent(QMouseEvent *event);

    void on_RegistButton_clicked();

    void on_nickname_textEdited(const QString &arg1);

    void on_phone_textEdited(const QString &arg1);

    void on_Password_textEdited(const QString &arg1);

    void on_ReconfirmPassword_textEdited(const QString &arg1);

    void on_identify_textEdited(const QString &arg1);

private:
    Ui::Register *ui;
    QString verti;
};

#endif // REGISTER_H
