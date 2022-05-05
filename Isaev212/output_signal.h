#ifndef OUTPUT_SIGNAL_H
#define OUTPUT_SIGNAL_H

#include <QDialog>

namespace Ui {
class Output_signal;
}

class Output_signal : public QDialog
{
    Q_OBJECT

public:
    explicit Output_signal(QWidget *parent = nullptr);
    ~Output_signal();
    QString _outputType = "";
private slots:
    void on_exitButton_clicked();
    void on_acceptButton_clicked();

    void on_signalComboBox_currentTextChanged(const QString &arg1);

signals:
    void save();
    void getOutput();
private:
    Ui::Output_signal *ui;


};

#endif // OUTPUT_SIGNAL_H
