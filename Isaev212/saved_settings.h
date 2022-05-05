#ifndef SAVED_SETTINGS_H
#define SAVED_SETTINGS_H

#include <QDialog>

namespace Ui {
class saved_settings;
}

class saved_settings : public QDialog
{
    Q_OBJECT

public:
    explicit saved_settings(QWidget *parent = nullptr);
    ~saved_settings();

private:
    Ui::saved_settings *ui;
};

#endif // SAVED_SETTINGS_H
