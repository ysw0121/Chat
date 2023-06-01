#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class game_login;
}

class game_login : public QDialog
{
    Q_OBJECT

public:
    explicit game_login(QWidget *parent = nullptr);
    ~game_login();

private slots:
    void on_return_2_clicked();

    void on_log_clicked();

    void on_showpsw_clicked(bool checked);

private:
    Ui::game_login *ui;
};

#endif // LOGIN_H
