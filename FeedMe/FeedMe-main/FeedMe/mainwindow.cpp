#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QIntValidator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    {
    QSqlDatabase mydb =QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../shoppingListDB.db");

    if(!mydb.open())
    {
        ui->checkConntecionwithDB->setText("Failed");
    }
    else
        ui->checkConntecionwithDB->setText("Connected....");
    }
    filter.setPageData(true);
    filter.setPageSize(10);
    filter.setCurrentPage(0);
    connect(&filter,&Filter::started,this,&MainWindow::started);
    connect(&filter,&Filter::finished,this,&MainWindow::finished);

    filter.setSourceModel(&model);

    ui->tableView->setModel(&filter);

    makeTestData();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_page_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_btn_page_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_btn_page_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_btn_page_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_btn_page_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_btn_search_product_clicked()
{
    filter.filterPaged(ui->lineEdit->text());
}


void MainWindow::on_btn_previous_page_clicked()
{
    filter.back();
}


void MainWindow::on_btn_next_page_clicked()
{
    filter.next();
}

void MainWindow::started()
{
    qInfo() << "SZUKAM";
}

void MainWindow::finished()
{
    qInfo() << "SKONCZYLEM";
    QString current = QString::number(filter.currentPage());
    QString total = QString::number(filter.pageCount());
    ui->lblCount->setText((current + " z " + total));

}

void MainWindow::makeTestData()
{
    Data data;
    QString path = QGuiApplication::applicationDirPath();
    path.append("/test.txt");

    if(!data.writeTest(path, 1000))
    {
        QMessageBox::critical(this, "Error","Nie mozna wykonac testu!");
        return;
    }
    loadFile(path);
}

void MainWindow::loadFile(QString path)
{
    Data data;
    if(!data.loadTable(path, &model))
    {
        QMessageBox::critical(this, "Error", "Nie mozna otworzyc pliku");
        return;
    }
    ui->tableView->verticalHeader()->setVisible(false);
}


void MainWindow::on_actiontest_triggered()
{
    QFileDialog dlg;
    QString path = dlg.getSaveFileName(this, "Stworz plik");
    QFileInfo fi(path);
    if(path.isEmpty()) return;
    if(fi.exists())
    {
        QMessageBox::StandardButton btn = QMessageBox::question(this, "File Exists", "File exists");

        if(btn == QMessageBox::Yes) on_actiontest_triggered();
        return;
    }

    int value = QInputDialog::getInt(this,"Max items","How many item to create?");
    Data data;
    if(!data.writeTest(path, value))
    {
        QMessageBox::critical(this,"Error", "Nie mozna wykonc testu:");
        return;
    }
    loadFile(path);
}

void MainWindow::on_addProduct_clicked()
{
    connOpen();
    QSqlQuery database;

    QString Product, Amount;
    Product = ui -> Name_linetxt -> text();
    QIntValidator *onlyInt = new QIntValidator(0,100000);
    ui -> Amount_linetxt -> setValidator(onlyInt);
    Amount = ui -> Amount_linetxt -> text();

    database.prepare("insert into shoppingList (Product, Amount) values ('"+Product+"', '"+Amount+"')");

    if(database.exec())
    {
        QMessageBox::critical(this, tr("Save"), tr("Saved"));
        connClose();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), database.lastError().text());
    }
}


void MainWindow::on_loadData_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();

    connOpen();
    QSqlQuery *database = new QSqlQuery(mydb);

    database->prepare("select * from shoppingList");
    database->exec();
    modal->setQuery(*database);
    ui->tableView_2->setModel(modal);
    connClose();


}


void MainWindow::on_add_recipe_clicked()
{
    connOpen();
    QSqlQuery database;

    QString Name, Recipe_Steps;
    Name = ui -> recipe_name -> text();
    Recipe_Steps = ui -> Recipe_steps -> toPlainText();

            database.prepare("insert into recipes (Name, Steps) values (:name, :steps)");
            database.bindValue(":name",Name);
            database.bindValue(":steps",Recipe_Steps);

    if(database.exec())
    {
        QMessageBox::critical(this, tr("Save"), tr("Saved"));
        connClose();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), database.lastError().text());
    }
}


void MainWindow::on_recipses_list_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_display_add_recipe_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);

}


void MainWindow::on_add_ingredient_clicked()
{

//Przenieść do zapisz przepis
//        connOpen();
//        QSqlQuery database;

//        QString Ingredient_Name,Ingredient_Amount;
//        Ingredient_Name = ui -> Ingredient_name -> text();
//        Ingredient_Amount = ui -> Amount_linetxt -> text();

//        database.prepare("insert into shoppingList (Product, Amount) values (:ingredientName, :ingredientAmount)");
//        database.bindValue(":ingredientName",Ingredient_Name);
//        database.bindValue(":ingredientAmount",Ingredient_Amount);
//        if(database.exec())
//        {
//            QMessageBox::critical(this, tr("Save"), tr("Saved"));
//            connClose();
//        }
//        else
//        {
//            QMessageBox::critical(this, tr("Error"), database.lastError().text());
//        }
}

