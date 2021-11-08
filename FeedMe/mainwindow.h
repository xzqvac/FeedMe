#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
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

private:
    Ui::MainWindow *ui;
    QStandardItemModel model;
    Filter filter;

    void makeTestData();
    void loadFile(QString path);
};
#endif // MAINWINDOW_H
