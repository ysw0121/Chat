#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

private slots:
    void on_question_clicked(bool checked);

    void on_number_permit_clicked(bool checked);

    void buttonex();

    void on_no_certi_clicked(bool checked);

    void on_name_permit_clicked(bool checked);

    void init();

    void on_confirm_clicked();

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H
