#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "output_signal.h"
#include "notsaved.h"
#include "saved.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_musicStyleBox_currentTextChanged(const QString &arg1);

    void on_verticalSlider1_valueChanged(int value);

    void on_plus1_clicked();

    void on_minus1_clicked();

    void on_verticalSlider2_valueChanged(int value);

    void on_plus2_clicked();

    void on_minus2_clicked();

    void on_verticalSlider3_valueChanged(int value);

    void on_plus3_clicked();

    void on_minus3_clicked();

    void on_verticalSlider4_valueChanged(int value);

    void on_plus4_clicked();

    void on_minus4_clicked();

    void on_verticalSlider5_valueChanged(int value);

    void on_plus5_clicked();

    void on_minus5_clicked();

    void on_verticalSlider6_valueChanged(int value);

    void on_plus6_clicked();

    void on_minus6_clicked();

    void on_verticalSlider7_valueChanged(int value);

    void on_plus7_clicked();

    void on_minus7_clicked();

    void on_verticalSlider8_valueChanged(int value);

    void on_plus8_clicked();

    void on_minus8_clicked();

    void on_verticalSlider9_valueChanged(int value);

    void on_plus9_clicked();

    void on_minus9_clicked();

    void on_verticalSlider10_valueChanged(int value);

    void on_plus10_clicked();

    void on_minus10_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_exitButton_clicked();

    void on_pushButton_clicked();

    void _show();

    void on_saveButton_clicked();

    void saveOutput();
signals:
    void setConfig();
private:
    Ui::MainWindow *ui;
    Output_signal *output_signal_ui;
    notSaved *notSaved_ui;
    saved *saved_ui;
    QString _musicStyle = "";
    QString _outputType = "";
    int _number1;
    int _number2;
    int _number3;
    int _number4;
    int _number5;
    int _number6;
    int _number7;
    int _number8;
    int _number9;
    int _number10;
    int signalCount;
};
#endif // MAINWINDOW_H
