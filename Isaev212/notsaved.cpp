#include "notsaved.h"
#include "ui_notsaved.h"

notSaved::notSaved(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notSaved)
{
    ui->setupUi(this);
}

notSaved::~notSaved()
{
    delete ui;
}

void notSaved::on_exitButton_clicked()
{
    hide();
}
