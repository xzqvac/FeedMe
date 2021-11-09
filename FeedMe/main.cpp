#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication FeedMe(argc, argv);
    MainWindow w;
    w.show();
    return FeedMe.exec();
}
