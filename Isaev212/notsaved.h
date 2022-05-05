#ifndef NOTSAVED_H
#define NOTSAVED_H

#include <QDialog>

namespace Ui {
class notSaved;
}

class notSaved : public QDialog
{
    Q_OBJECT

public:
    explicit notSaved(QWidget *parent = nullptr);
    ~notSaved();

private slots:
    void on_exitButton_clicked();

private:
    Ui::notSaved *ui;
};

#endif // NOTSAVED_H
