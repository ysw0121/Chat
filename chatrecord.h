#ifndef CHATRECORD_H
#define CHATRECORD_H

#include <QDialog>

namespace Ui {
class chatRecord;
}

class chatRecord : public QDialog
{
    Q_OBJECT

public:
    explicit chatRecord(QWidget *parent = nullptr);
    ~chatRecord();

private slots:
    void on_return_2_clicked();

private:
    Ui::chatRecord *ui;
};

#endif // CHATRECORD_H
