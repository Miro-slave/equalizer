#include "output_signal.h"
#include "ui_output_signal.h"

Output_signal::Output_signal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Output_signal)
{
    ui->setupUi(this);
    ui->XLRLabel->hide();
    ui->AXIALLabel->hide();
}

Output_signal::~Output_signal()
{
    delete ui;
}



void Output_signal::on_exitButton_clicked()
{
    save();
}

void Output_signal::on_acceptButton_clicked()
{
    getOutput();
    save();
}

void Output_signal::on_signalComboBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "USB")
    {
        ui->USBLabel->show();
        ui->XLRLabel->hide();
        ui->AXIALLabel->hide();
        _outputType = "USB";
    }
    else if (arg1 == "XLR")
    {
        ui->XLRLabel->show();
        ui->USBLabel->hide();
        ui->AXIALLabel->hide();
        _outputType = "XLR";
    }
    else if (arg1 == "COAXIAL")
    {
        ui->AXIALLabel->show();
        ui->USBLabel->hide();
        ui->XLRLabel->hide();
        _outputType = "COAXIAL";
    }
}
