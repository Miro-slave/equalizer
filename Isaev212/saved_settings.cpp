#include "saved_settings.h"
#include "ui_saved_settings.h"

saved_settings::saved_settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saved_settings)
{
    ui->setupUi(this);
}

saved_settings::~saved_settings()
{
    delete ui;
}
