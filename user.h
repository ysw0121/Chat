#ifndef USER_H
#define USER_H

#include <QDialog>

namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_setting_clicked();

    void on_exit_clicked();

    void on_moments_clicked();

    void on_new_friends_clicked();

    void on_my_history_clicked();


    void on_contactList_doubleClicked(const QModelIndex &index);

    void on_send_clicked();

private:
    Ui::User *ui;
};

#endif // USER_H
