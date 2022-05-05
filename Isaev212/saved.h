#ifndef SAVED_H
#define SAVED_H

#include <QDialog>

namespace Ui {
class saved;
}

class saved : public QDialog
{
    Q_OBJECT

public:
    explicit saved(QWidget *parent = nullptr);
    ~saved();
    QString _musicStyle;
    QString _outputType;
    int signalCount;
private slots:
    void on_pushButton_clicked();
    void config();
private:
    Ui::saved *ui;
};

#endif // SAVED_H
