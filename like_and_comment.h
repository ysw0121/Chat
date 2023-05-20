#ifndef LIKE_AND_COMMENT_H
#define LIKE_AND_COMMENT_H

#include <QDialog>

namespace Ui {
class like_and_comment;
}

class like_and_comment : public QDialog
{
    Q_OBJECT

public:
    explicit like_and_comment(QWidget *parent = nullptr);
    ~like_and_comment();

private slots:
    void on_sure_clicked();

private:
    Ui::like_and_comment *ui;
};

#endif // LIKE_AND_COMMENT_H
