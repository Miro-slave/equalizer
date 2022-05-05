#include "mainwindow.h"
#include <clocale>
#include <QApplication>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RUS");
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    w.show();
    return a.exec();
}
