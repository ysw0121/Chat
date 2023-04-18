#ifndef CHANGEPSW_H
#define CHANGEPSW_H

#include <QDialog>

namespace Ui {
class changePsw;
}

class changePsw : public QDialog
{
    Q_OBJECT

public:
    explicit changePsw(QWidget *parent = nullptr);
    ~changePsw();

private:
    Ui::changePsw *ui;
};

#endif // CHANGEPSW_H
