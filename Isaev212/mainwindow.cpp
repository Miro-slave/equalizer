#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    output_signal_ui = new Output_signal;
    output_signal_ui->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    saved_ui = new saved;
    saved_ui->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    connect(output_signal_ui, SIGNAL(save()), this, SLOT(_show()));
    connect(output_signal_ui, SIGNAL(getOutput()), this, SLOT(saveOutput()));
    connect(this, SIGNAL(setConfig()), saved_ui, SLOT(config()));
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_musicStyleBox_currentTextChanged(const QString &musicStyle)
{
    _musicStyle = musicStyle;
    if (musicStyle == "Поп")
    {
        ui->verticalSlider1->setSliderPosition(28);
        ui->verticalSlider2->setSliderPosition(77);
        ui->verticalSlider3->setSliderPosition(23);
        ui->verticalSlider4->setSliderPosition(20);
        ui->verticalSlider5->setSliderPosition(57);
        ui->verticalSlider6->setSliderPosition(74);
        ui->verticalSlider7->setSliderPosition(15);
        ui->verticalSlider8->setSliderPosition(76);
        ui->verticalSlider9->setSliderPosition(31);
        ui->verticalSlider10->setSliderPosition(38);
    }
    else if (musicStyle == "Акустика")
    {
        ui->verticalSlider1->setSliderPosition(42);
        ui->verticalSlider2->setSliderPosition(22);
        ui->verticalSlider3->setSliderPosition(39);
        ui->verticalSlider4->setSliderPosition(68);
        ui->verticalSlider5->setSliderPosition(63);
        ui->verticalSlider6->setSliderPosition(24);
        ui->verticalSlider7->setSliderPosition(20);
        ui->verticalSlider8->setSliderPosition(17);
        ui->verticalSlider9->setSliderPosition(88);
        ui->verticalSlider10->setSliderPosition(44);
    }
    else if (musicStyle == "Опера")
    {
        ui->verticalSlider1->setSliderPosition(15);
        ui->verticalSlider2->setSliderPosition(7);
        ui->verticalSlider3->setSliderPosition(17);
        ui->verticalSlider4->setSliderPosition(4);
        ui->verticalSlider5->setSliderPosition(61);
        ui->verticalSlider6->setSliderPosition(83);
        ui->verticalSlider7->setSliderPosition(68);
        ui->verticalSlider8->setSliderPosition(46);
        ui->verticalSlider9->setSliderPosition(99);
        ui->verticalSlider10->setSliderPosition(45);
    }
    else if (musicStyle == "Классика")
    {
        ui->verticalSlider1->setSliderPosition(89);
        ui->verticalSlider2->setSliderPosition(52);
        ui->verticalSlider3->setSliderPosition(85);
        ui->verticalSlider4->setSliderPosition(7);
        ui->verticalSlider5->setSliderPosition(54);
        ui->verticalSlider6->setSliderPosition(38);
        ui->verticalSlider7->setSliderPosition(52);
        ui->verticalSlider8->setSliderPosition(58);
        ui->verticalSlider9->setSliderPosition(16);
        ui->verticalSlider10->setSliderPosition(1);
    }
    else if (musicStyle == "Рок")
    {
        ui->verticalSlider1->setSliderPosition(20);
        ui->verticalSlider2->setSliderPosition(45);
        ui->verticalSlider3->setSliderPosition(78);
        ui->verticalSlider4->setSliderPosition(32);
        ui->verticalSlider5->setSliderPosition(67);
        ui->verticalSlider6->setSliderPosition(23);
        ui->verticalSlider7->setSliderPosition(85);
        ui->verticalSlider8->setSliderPosition(28);
        ui->verticalSlider9->setSliderPosition(36);
        ui->verticalSlider10->setSliderPosition(46);
    }
    else if (musicStyle == "Пользовательский")
    {
        ui->verticalSlider1->setSliderPosition(0);
        ui->verticalSlider2->setSliderPosition(0);
        ui->verticalSlider3->setSliderPosition(0);
        ui->verticalSlider4->setSliderPosition(0);
        ui->verticalSlider5->setSliderPosition(0);
        ui->verticalSlider6->setSliderPosition(0);
        ui->verticalSlider7->setSliderPosition(0);
        ui->verticalSlider8->setSliderPosition(0);
        ui->verticalSlider9->setSliderPosition(0);
        ui->verticalSlider10->setSliderPosition(0);
    }
}



void MainWindow::on_verticalSlider1_valueChanged(int value)
{
    ui->verticalSlider1->setSliderPosition(value);
    ui->number1->setText(QString::number(value));
}

void MainWindow::on_plus1_clicked()
{
    on_verticalSlider1_valueChanged(std::min(ui->number1->text().toInt() + 1, 99));
}

void MainWindow::on_minus1_clicked()
{
    on_verticalSlider1_valueChanged(std::max(ui->number1->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider2_valueChanged(int value)
{
    ui->verticalSlider2->setSliderPosition(value);
    ui->number2->setText(QString::number(value));
}

void MainWindow::on_plus2_clicked()
{
    on_verticalSlider2_valueChanged(std::min(ui->number2->text().toInt() + 1, 99));
}

void MainWindow::on_minus2_clicked()
{
    on_verticalSlider2_valueChanged(std::max(ui->number2->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider3_valueChanged(int value)
{
    ui->verticalSlider3->setSliderPosition(value);
    ui->number3->setText(QString::number(value));
}

void MainWindow::on_plus3_clicked()
{
    on_verticalSlider3_valueChanged(std::min(ui->number3->text().toInt() + 1, 99));
}

void MainWindow::on_minus3_clicked()
{
    on_verticalSlider3_valueChanged(std::max(ui->number3->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider4_valueChanged(int value)
{
    ui->verticalSlider4->setSliderPosition(value);
    ui->number4->setText(QString::number(value));
}

void MainWindow::on_plus4_clicked()
{
    on_verticalSlider4_valueChanged(std::min(ui->number4->text().toInt() + 1, 99));
}

void MainWindow::on_minus4_clicked()
{
    on_verticalSlider4_valueChanged(std::max(ui->number4->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider5_valueChanged(int value)
{
    ui->verticalSlider5->setSliderPosition(value);
    ui->number5->setText(QString::number(value));
}

void MainWindow::on_plus5_clicked()
{
    on_verticalSlider5_valueChanged(std::min(ui->number5->text().toInt() + 1, 99));
}

void MainWindow::on_minus5_clicked()
{
    on_verticalSlider5_valueChanged(std::max(ui->number5->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider6_valueChanged(int value)
{
    ui->verticalSlider6->setSliderPosition(value);
    ui->number6->setText(QString::number(value));
}

void MainWindow::on_plus6_clicked()
{
    on_verticalSlider6_valueChanged(std::min(ui->number6->text().toInt() + 1, 99));
}

void MainWindow::on_minus6_clicked()
{
    on_verticalSlider6_valueChanged(std::max(ui->number6->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider7_valueChanged(int value)
{
    ui->verticalSlider7->setSliderPosition(value);
    ui->number7->setText(QString::number(value));
}

void MainWindow::on_plus7_clicked()
{
    on_verticalSlider7_valueChanged(std::min(ui->number7->text().toInt() + 1, 99));
}

void MainWindow::on_minus7_clicked()
{
    on_verticalSlider7_valueChanged(std::max(ui->number7->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider8_valueChanged(int value)
{
    ui->verticalSlider8->setSliderPosition(value);
    ui->number8->setText(QString::number(value));
}

void MainWindow::on_plus8_clicked()
{
    on_verticalSlider8_valueChanged(std::min(ui->number8->text().toInt() + 1, 99));
}

void MainWindow::on_minus8_clicked()
{
    on_verticalSlider8_valueChanged(std::max(ui->number8->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider9_valueChanged(int value)
{
    ui->verticalSlider9->setSliderPosition(value);
    ui->number9->setText(QString::number(value));
}

void MainWindow::on_plus9_clicked()
{
    on_verticalSlider9_valueChanged(std::min(ui->number9->text().toInt() + 1, 99));
}

void MainWindow::on_minus9_clicked()
{
    on_verticalSlider9_valueChanged(std::max(ui->number9->text().toInt() - 1, 0));
}

void MainWindow::on_verticalSlider10_valueChanged(int value)
{
    ui->verticalSlider10->setSliderPosition(value);
    ui->number10->setText(QString::number(value));
}

void MainWindow::on_plus10_clicked()
{
    on_verticalSlider10_valueChanged(std::min(ui->number10->text().toInt() + 1, 99));
}

void MainWindow::on_minus10_clicked()
{
    on_verticalSlider10_valueChanged(std::max(ui->number10->text().toInt() - 1, 0));
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    int volumeCount = arg1.toInt();
    switch (volumeCount)
    {
    case 10:
        ui->verticalSlider4->show();
        ui->plus4->show();
        ui->minus4->show();
        ui->number4->show();
        ui->verticalSlider5->show();
        ui->plus5->show();
        ui->minus5->show();
        ui->number5->show();
        ui->verticalSlider6->show();
        ui->plus6->show();
        ui->minus6->show();
        ui->number6->show();
        ui->verticalSlider7->show();
        ui->plus7->show();
        ui->minus7->show();
        ui->number7->show();
        ui->verticalSlider8->show();
        ui->plus8->show();
        ui->minus8->show();
        ui->number8->show();
        ui->verticalSlider9->show();
        ui->plus9->show();
        ui->minus9->show();
        ui->number9->show();
        ui->verticalSlider10->show();
        ui->plus10->show();
        ui->minus10->show();
        ui->number10->show();
        break;
    case 5:
        ui->verticalSlider4->show();
        ui->plus4->show();
        ui->minus4->show();
        ui->number4->show();
        ui->verticalSlider5->show();
        ui->plus5->show();
        ui->minus5->show();
        ui->number5->show();
        ui->verticalSlider6->hide();
        ui->plus6->hide();
        ui->minus6->hide();
        ui->number6->hide();
        ui->verticalSlider7->hide();
        ui->plus7->hide();
        ui->minus7->hide();
        ui->number7->hide();
        ui->verticalSlider8->hide();
        ui->plus8->hide();
        ui->minus8->hide();
        ui->number8->hide();
        ui->verticalSlider9->hide();
        ui->plus9->hide();
        ui->minus9->hide();
        ui->number9->hide();
        ui->verticalSlider10->hide();
        ui->plus10->hide();
        ui->minus10->hide();
        ui->number10->hide();
        break;
    case 3:
        ui->verticalSlider4->hide();
        ui->plus4->hide();
        ui->minus4->hide();
        ui->number4->hide();
        ui->verticalSlider5->hide();
        ui->plus5->hide();
        ui->minus5->hide();
        ui->number5->hide();
        ui->verticalSlider6->hide();
        ui->plus6->hide();
        ui->minus6->hide();
        ui->number6->hide();
        ui->verticalSlider7->hide();
        ui->plus7->hide();
        ui->minus7->hide();
        ui->number7->hide();
        ui->verticalSlider8->hide();
        ui->plus8->hide();
        ui->minus8->hide();
        ui->number8->hide();
        ui->verticalSlider9->hide();
        ui->plus9->hide();
        ui->minus9->hide();
        ui->number9->hide();
        ui->verticalSlider10->hide();
        ui->plus10->hide();
        ui->minus10->hide();
        ui->number10->hide();
        break;
    }

}

void MainWindow::on_exitButton_clicked()
{
    hide();
}

void MainWindow::on_pushButton_clicked()
{
    output_signal_ui->show();
    hide();
}

void MainWindow::_show()
{
    show();
    output_signal_ui->hide();
}

void MainWindow::saveOutput()
{
    _outputType = output_signal_ui->_outputType;
}

void MainWindow::on_saveButton_clicked()
{
    _number1 = ui->number1->text().toInt();
    _number2 = ui->number2->text().toInt();
    _number3 = ui->number3->text().toInt();
    _number4 = ui->number4->text().toInt();
    _number5 = ui->number5->text().toInt();
    _number6 = ui->number6->text().toInt();
    _number7 = ui->number7->text().toInt();
    _number8 = ui->number8->text().toInt();
    _number9 = ui->number9->text().toInt();
    _number10 = ui->number10->text().toInt();
    signalCount = ui->comboBox->currentText().toInt();
    switch (signalCount)
    {
    case 10:
        if ((_number1 == 0 && _number2 == 0 && _number3 == 0 &&
             _number4 == 0 && _number5 == 0 && _number6 == 0 &&
             _number7 == 0 && _number8 == 0 && _number9 == 0 &&
             _number10 == 0) || _musicStyle == "" || _outputType == "")
        {
            notSaved_ui = new notSaved;
            notSaved_ui->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
            notSaved_ui->show();
            hide();
        }
        else
        {
            saved_ui->_musicStyle = _musicStyle;
            saved_ui->_outputType = _outputType;
            saved_ui->signalCount = signalCount;
            setConfig();
            saved_ui->show();
            hide();
        }
        break;
    case 5:
        if ((_number1 == 0 && _number2 == 0 && _number3 == 0 &&
             _number4 == 0 && _number5 == 0) || _musicStyle == "" || _outputType == "")
        {
            notSaved_ui = new notSaved;
            notSaved_ui->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
            notSaved_ui->show();
            hide();
        }
        else
        {
            saved_ui->_musicStyle = _musicStyle;
            saved_ui->_outputType = _outputType;
            saved_ui->signalCount = signalCount;
            setConfig();
            saved_ui->show();
            hide();
        }
        break;
    case 3:
        if ((_number1 == 0 && _number2 == 0 && _number3 == 0)
             || _musicStyle == "" || _outputType == "")
        {
            notSaved_ui = new notSaved;
            notSaved_ui->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
            notSaved_ui->show();
            hide();
        }
        else
        {
            saved_ui->_musicStyle = _musicStyle;
            saved_ui->_outputType = _outputType;
            saved_ui->signalCount = signalCount;
            setConfig();
            saved_ui->show();
            hide();
        }
        break;
    }
}


