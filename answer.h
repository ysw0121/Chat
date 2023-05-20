#ifndef ANSWER_H
#define ANSWER_H

#include <QDialog>

namespace Ui {
class Answer;
}

class Answer : public QDialog
{
    Q_OBJECT

public:
    explicit Answer(QWidget *parent = nullptr);
    ~Answer();

private slots:
    void on_send_clicked();

private:
    Ui::Answer *ui;
};

#endif // ANSWER_H
