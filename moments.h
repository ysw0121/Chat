#ifndef MOMENTS_H
#define MOMENTS_H

#include <QDialog>

namespace Ui {
class moments;
}

class moments : public QDialog
{
    Q_OBJECT

public:
    explicit moments(QWidget *parent = nullptr);
    ~moments();

private slots:
    void on_return_2_clicked();

    void on_content_send_clicked();

    void on_mainWind_doubleClicked(const QModelIndex &index);

private:
    Ui::moments *ui;
};

#endif // MOMENTS_H
