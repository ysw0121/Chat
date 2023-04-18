#ifndef QUESTION_EDIT_H
#define QUESTION_EDIT_H

#include <QDialog>

namespace Ui {
class question_edit;
}

class question_edit : public QDialog
{
    Q_OBJECT

public:
    explicit question_edit(QWidget *parent = nullptr);
    ~question_edit();

private slots:
    void on_cancel_clicked();

private:
    Ui::question_edit *ui;
};

#endif // QUESTION_EDIT_H
