#ifndef NEWFRIEND_H
#define NEWFRIEND_H

#include <QDialog>

namespace Ui {
class newFriend;
}

class newFriend : public QDialog
{
    Q_OBJECT

public:
    explicit newFriend(QWidget *parent = nullptr);
    ~newFriend();

private slots:
    void on_return_2_clicked();

    void on_go_clicked();

    void on_name_accord_stateChanged(int arg1);

    void on_phone_accord_stateChanged(int arg1);

    void on_result_doubleClicked(const QModelIndex &index);

    void on_applyList_doubleClicked(const QModelIndex &index);

private:
    Ui::newFriend *ui;
};

#endif // NEWFRIEND_H
