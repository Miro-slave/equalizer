#include "saved.h"
#include "ui_saved.h"

saved::saved(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saved)
{
    ui->setupUi(this);
}

saved::~saved()
{
    delete ui;
}

void saved::on_pushButton_clicked()
{
    hide();
}

void saved::config()
{
    ui->label->setText(QString::number(signalCount));
    ui->label_1->setText(_musicStyle);
    ui->label_2->setText(_outputType);
}
