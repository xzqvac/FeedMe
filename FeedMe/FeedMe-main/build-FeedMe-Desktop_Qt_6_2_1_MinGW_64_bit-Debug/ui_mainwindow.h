/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiontest;
    QWidget *centralwidget;
    QFrame *topMenu;
    QLabel *logo;
    QFrame *leftMenu;
    QPushButton *btn_page_1;
    QPushButton *btn_page_2;
    QPushButton *btn_page_3;
    QPushButton *btn_page_4;
    QPushButton *btn_page_5;
    QFrame *pagesFrame;
    QStackedWidget *stackedWidget;
    QWidget *Start;
    QLabel *label;
    QWidget *Recipies;
    QLabel *label_2;
    QWidget *CookIt;
    QLabel *label_3;
    QWidget *Kitchen;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *btn_search_product;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_previous_page;
    QLabel *lblCount;
    QPushButton *btn_next_page;
    QWidget *Shopping;
    QLabel *checkConntecionwithDB;
    QLineEdit *Name_linetxt;
    QLabel *NazwaProduktu;
    QLabel *Ilosc;
    QPushButton *addProduct;
    QLineEdit *Amount_linetxt;
    QTableView *tableView_2;
    QPushButton *loadData;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(746, 616);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actiontest = new QAction(MainWindow);
        actiontest->setObjectName(QString::fromUtf8("actiontest"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        topMenu = new QFrame(centralwidget);
        topMenu->setObjectName(QString::fromUtf8("topMenu"));
        topMenu->setGeometry(QRect(0, 0, 800, 80));
        topMenu->setFrameShape(QFrame::StyledPanel);
        topMenu->setFrameShadow(QFrame::Raised);
        logo = new QLabel(topMenu);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(200, 0, 311, 81));
        logo->setPixmap(QPixmap(QString::fromUtf8("D:/tutorial/asd/FeedMe/images/l11.png")));
        leftMenu = new QFrame(centralwidget);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setGeometry(QRect(0, 80, 180, 520));
        leftMenu->setFrameShape(QFrame::StyledPanel);
        leftMenu->setFrameShadow(QFrame::Raised);
        btn_page_1 = new QPushButton(leftMenu);
        btn_page_1->setObjectName(QString::fromUtf8("btn_page_1"));
        btn_page_1->setGeometry(QRect(11, 13, 161, 31));
        btn_page_1->setLayoutDirection(Qt::RightToLeft);
        btn_page_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid; \n"
"    vertical-align: middle;\n"
"	border-width: 1px;\n"
"	padding-top: 5px;\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight: 900;	\n"
"	border-radius:10px;\n"
"	border-color: lightgrey;  \n"
"	color:rgb(255, 132, 0)\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 132, 0);\n"
"	color:#fff;\n"
" \n"
"}\n"
"	\n"
"	\n"
"\n"
"\n"
"	\n"
"\n"
""));
        btn_page_2 = new QPushButton(leftMenu);
        btn_page_2->setObjectName(QString::fromUtf8("btn_page_2"));
        btn_page_2->setGeometry(QRect(10, 60, 161, 31));
        btn_page_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid; \n"
"    vertical-align: middle;\n"
"	border-width: 1px;\n"
"	padding-top: 5px;\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight: 900;	\n"
"	border-radius:10px;\n"
"	border-color: lightgrey;  \n"
"	color:rgb(255, 132, 0)\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 132, 0);\n"
"	color:#fff;\n"
" \n"
"}\n"
"	\n"
"	\n"
"\n"
"\n"
"	\n"
"\n"
""));
        btn_page_3 = new QPushButton(leftMenu);
        btn_page_3->setObjectName(QString::fromUtf8("btn_page_3"));
        btn_page_3->setGeometry(QRect(10, 110, 161, 31));
        btn_page_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid; \n"
"    vertical-align: middle;\n"
"	border-width: 1px;\n"
"	padding-top: 5px;\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight: 900;	\n"
"	border-radius:10px;\n"
"	border-color: lightgrey;  \n"
"	color:rgb(255, 132, 0)\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 132, 0);\n"
"	color:#fff;\n"
" \n"
"}\n"
"	\n"
"	\n"
"\n"
"\n"
"	\n"
"\n"
""));
        btn_page_4 = new QPushButton(leftMenu);
        btn_page_4->setObjectName(QString::fromUtf8("btn_page_4"));
        btn_page_4->setGeometry(QRect(10, 160, 161, 31));
        btn_page_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid; \n"
"    vertical-align: middle;\n"
"	border-width: 1px;\n"
"	padding-top: 5px;\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight: 900;	\n"
"	border-radius:10px;\n"
"	border-color: lightgrey;  \n"
"	color:rgb(255, 132, 0)\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 132, 0);\n"
"	color:#fff;\n"
" \n"
"}\n"
"	\n"
"	\n"
"\n"
"\n"
"	\n"
"	\n"
"\n"
""));
        btn_page_5 = new QPushButton(leftMenu);
        btn_page_5->setObjectName(QString::fromUtf8("btn_page_5"));
        btn_page_5->setGeometry(QRect(10, 210, 161, 31));
        btn_page_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid; \n"
"    vertical-align: middle;\n"
"	border-width: 1px;\n"
"	padding-top: 5px;\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight: 900;	\n"
"	border-radius:10px;\n"
"	border-color: lightgrey;  \n"
"	color:rgb(255, 132, 0)\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 132, 0);\n"
"	color:#fff;\n"
" \n"
"}\n"
"	\n"
"	\n"
"\n"
"\n"
"	\n"
"\n"
""));
        pagesFrame = new QFrame(centralwidget);
        pagesFrame->setObjectName(QString::fromUtf8("pagesFrame"));
        pagesFrame->setGeometry(QRect(180, 80, 561, 521));
        pagesFrame->setMaximumSize(QSize(631, 521));
        pagesFrame->setFrameShape(QFrame::StyledPanel);
        pagesFrame->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(pagesFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 561, 531));
        Start = new QWidget();
        Start->setObjectName(QString::fromUtf8("Start"));
        label = new QLabel(Start);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 90, 47, 13));
        stackedWidget->addWidget(Start);
        Recipies = new QWidget();
        Recipies->setObjectName(QString::fromUtf8("Recipies"));
        label_2 = new QLabel(Recipies);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 200, 47, 13));
        stackedWidget->addWidget(Recipies);
        CookIt = new QWidget();
        CookIt->setObjectName(QString::fromUtf8("CookIt"));
        label_3 = new QLabel(CookIt);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 270, 47, 13));
        stackedWidget->addWidget(CookIt);
        Kitchen = new QWidget();
        Kitchen->setObjectName(QString::fromUtf8("Kitchen"));
        layoutWidget = new QWidget(Kitchen);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 411, 391));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        btn_search_product = new QPushButton(layoutWidget);
        btn_search_product->setObjectName(QString::fromUtf8("btn_search_product"));
        btn_search_product->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid;\n"
"	border-color: grey;\n"
"	border-width: 1px;\n"
"	padding-top: 5px;\n"
"	color: rgb(0, 0, 0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 170, 0)\n"
"}\n"
"	\n"
"	\n"
"\n"
""));

        horizontalLayout->addWidget(btn_search_product);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_previous_page = new QPushButton(layoutWidget);
        btn_previous_page->setObjectName(QString::fromUtf8("btn_previous_page"));

        horizontalLayout_2->addWidget(btn_previous_page);

        lblCount = new QLabel(layoutWidget);
        lblCount->setObjectName(QString::fromUtf8("lblCount"));

        horizontalLayout_2->addWidget(lblCount);

        btn_next_page = new QPushButton(layoutWidget);
        btn_next_page->setObjectName(QString::fromUtf8("btn_next_page"));

        horizontalLayout_2->addWidget(btn_next_page);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(Kitchen);
        Shopping = new QWidget();
        Shopping->setObjectName(QString::fromUtf8("Shopping"));
        checkConntecionwithDB = new QLabel(Shopping);
        checkConntecionwithDB->setObjectName(QString::fromUtf8("checkConntecionwithDB"));
        checkConntecionwithDB->setGeometry(QRect(60, 420, 151, 61));
        Name_linetxt = new QLineEdit(Shopping);
        Name_linetxt->setObjectName(QString::fromUtf8("Name_linetxt"));
        Name_linetxt->setGeometry(QRect(80, 190, 151, 20));
        NazwaProduktu = new QLabel(Shopping);
        NazwaProduktu->setObjectName(QString::fromUtf8("NazwaProduktu"));
        NazwaProduktu->setGeometry(QRect(21, 191, 32, 16));
        Ilosc = new QLabel(Shopping);
        Ilosc->setObjectName(QString::fromUtf8("Ilosc"));
        Ilosc->setGeometry(QRect(21, 217, 22, 16));
        addProduct = new QPushButton(Shopping);
        addProduct->setObjectName(QString::fromUtf8("addProduct"));
        addProduct->setGeometry(QRect(80, 260, 151, 23));
        Amount_linetxt = new QLineEdit(Shopping);
        Amount_linetxt->setObjectName(QString::fromUtf8("Amount_linetxt"));
        Amount_linetxt->setGeometry(QRect(80, 220, 151, 20));
        tableView_2 = new QTableView(Shopping);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(280, 140, 256, 192));
        loadData = new QPushButton(Shopping);
        loadData->setObjectName(QString::fromUtf8("loadData"));
        loadData->setGeometry(QRect(480, 490, 75, 23));
        stackedWidget->addWidget(Shopping);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actiontest->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        logo->setText(QString());
        btn_page_1->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btn_page_2->setText(QCoreApplication::translate("MainWindow", "Przepisy", nullptr));
        btn_page_3->setText(QCoreApplication::translate("MainWindow", "Ugotuj to", nullptr));
        btn_page_4->setText(QCoreApplication::translate("MainWindow", "Kuchnia", nullptr));
        btn_page_5->setText(QCoreApplication::translate("MainWindow", "Zakupy", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "P1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "P2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "P3", nullptr));
        btn_search_product->setText(QCoreApplication::translate("MainWindow", "Wyszukaj produkt", nullptr));
        btn_previous_page->setText(QCoreApplication::translate("MainWindow", "Poprzednia", nullptr));
        lblCount->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        btn_next_page->setText(QCoreApplication::translate("MainWindow", "Nast\304\231pna", nullptr));
        checkConntecionwithDB->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Name_linetxt->setText(QString());
        NazwaProduktu->setText(QCoreApplication::translate("MainWindow", "Nazwa", nullptr));
        Ilosc->setText(QCoreApplication::translate("MainWindow", "Ilosc", nullptr));
        addProduct->setText(QCoreApplication::translate("MainWindow", "Dodaj produkt", nullptr));
        Amount_linetxt->setText(QString());
        loadData->setText(QCoreApplication::translate("MainWindow", "Laduj dane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
