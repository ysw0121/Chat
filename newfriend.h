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

private:
    Ui::newFriend *ui;
};

#endif // NEWFRIEND_H
