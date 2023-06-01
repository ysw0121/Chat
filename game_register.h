#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
class game_Register;
}

class game_Register : public QDialog
{
    Q_OBJECT

public:
    explicit game_Register(QWidget *parent = nullptr);
    ~game_Register();

private slots:
    void on_return_2_clicked();

    void on_certain_clicked();

    void on_name_textEdited(const QString &arg1);

    void on_password_textEdited(const QString &arg1);

    void on_showpsw_clicked(bool checked);

private:
    Ui::game_Register *ui;
};

#endif // REGISTER_H
