#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include "data.h"
#include "filter.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        QSqlDatabase mydb =QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/Radosław/Desktop/projektc++/FeedMe/shoppingListDB.db");

        if(!mydb.open())
        {
            qDebug()<<("Failed");
            return false;
        }
        else{
             qDebug()<<("Connected....");
             return true;
        }
    }


private slots:
    void on_btn_page_1_clicked();

    void on_btn_page_2_clicked();

    void on_btn_page_3_clicked();

    void on_btn_page_4_clicked();

    void on_btn_page_5_clicked();

    void on_btn_search_product_clicked();

    void on_btn_previous_page_clicked();

    void on_btn_next_page_clicked();

    void started();

    void finished();

    void on_actiontest_triggered();

    void on_addProduct_clicked();

    void on_loadData_clicked();

private:
    Ui::MainWindow *ui;

    QStandardItemModel model;
    Filter filter;

    void makeTestData();
    void loadFile(QString path);
};


#endif // MAINWINDOW_H
