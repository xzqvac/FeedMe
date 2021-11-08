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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *topMenu;
    QFrame *leftMenu;
    QPushButton *btn_page_1;
    QPushButton *btn_page_2;
    QPushButton *btn_page_3;
    QPushButton *btn_page_4;
    QPushButton *btn_page_5;
    QFrame *pagesFrame;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QWidget *page_4;
    QLabel *label_4;
    QWidget *page_5;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        topMenu = new QFrame(centralwidget);
        topMenu->setObjectName(QString::fromUtf8("topMenu"));
        topMenu->setGeometry(QRect(0, 0, 800, 80));
        topMenu->setFrameShape(QFrame::StyledPanel);
        topMenu->setFrameShadow(QFrame::Raised);
        leftMenu = new QFrame(centralwidget);
        leftMenu->setObjectName(QString::fromUtf8("leftMenu"));
        leftMenu->setGeometry(QRect(0, 80, 180, 520));
        leftMenu->setFrameShape(QFrame::StyledPanel);
        leftMenu->setFrameShadow(QFrame::Raised);
        btn_page_1 = new QPushButton(leftMenu);
        btn_page_1->setObjectName(QString::fromUtf8("btn_page_1"));
        btn_page_1->setGeometry(QRect(11, 83, 161, 31));
        btn_page_1->setLayoutDirection(Qt::RightToLeft);
        btn_page_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_page_2 = new QPushButton(leftMenu);
        btn_page_2->setObjectName(QString::fromUtf8("btn_page_2"));
        btn_page_2->setGeometry(QRect(10, 130, 161, 31));
        btn_page_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_page_3 = new QPushButton(leftMenu);
        btn_page_3->setObjectName(QString::fromUtf8("btn_page_3"));
        btn_page_3->setGeometry(QRect(10, 180, 161, 31));
        btn_page_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_page_4 = new QPushButton(leftMenu);
        btn_page_4->setObjectName(QString::fromUtf8("btn_page_4"));
        btn_page_4->setGeometry(QRect(10, 230, 161, 31));
        btn_page_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btn_page_5 = new QPushButton(leftMenu);
        btn_page_5->setObjectName(QString::fromUtf8("btn_page_5"));
        btn_page_5->setGeometry(QRect(10, 280, 161, 31));
        btn_page_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pagesFrame = new QFrame(centralwidget);
        pagesFrame->setObjectName(QString::fromUtf8("pagesFrame"));
        pagesFrame->setGeometry(QRect(180, 80, 621, 521));
        pagesFrame->setMaximumSize(QSize(631, 521));
        pagesFrame->setFrameShape(QFrame::StyledPanel);
        pagesFrame->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(pagesFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 621, 521));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        label = new QLabel(page_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 90, 47, 13));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 200, 47, 13));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 270, 47, 13));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 300, 47, 13));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 290, 47, 13));
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_page_1->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btn_page_2->setText(QCoreApplication::translate("MainWindow", "Przepisy", nullptr));
        btn_page_3->setText(QCoreApplication::translate("MainWindow", "Ugotuj to", nullptr));
        btn_page_4->setText(QCoreApplication::translate("MainWindow", "Kuchnia", nullptr));
        btn_page_5->setText(QCoreApplication::translate("MainWindow", "Zakupy", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "P1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "P2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "P3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "P4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "P5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
