/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *P1;
    QPushButton *P2;
    QPushButton *T1;
    QPushButton *T2;
    QPushButton *S1;
    QPushButton *S2;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(381, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        P1 = new QPushButton(centralwidget);
        P1->setObjectName("P1");
        P1->setGeometry(QRect(52, 180, 121, 29));
        P2 = new QPushButton(centralwidget);
        P2->setObjectName("P2");
        P2->setGeometry(QRect(200, 180, 121, 29));
        T1 = new QPushButton(centralwidget);
        T1->setObjectName("T1");
        T1->setGeometry(QRect(52, 220, 121, 29));
        T2 = new QPushButton(centralwidget);
        T2->setObjectName("T2");
        T2->setGeometry(QRect(200, 220, 121, 29));
        S1 = new QPushButton(centralwidget);
        S1->setObjectName("S1");
        S1->setGeometry(QRect(52, 310, 121, 29));
        S2 = new QPushButton(centralwidget);
        S2->setObjectName("S2");
        S2->setGeometry(QRect(200, 310, 121, 29));
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(200, 140, 121, 31));
        progressBar_2->setValue(24);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(50, 140, 121, 31));
        progressBar->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 260, 261, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 381, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        P1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        P2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        T1->setText(QCoreApplication::translate("MainWindow", "120s", nullptr));
        T2->setText(QCoreApplication::translate("MainWindow", "5min", nullptr));
        S1->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        S2->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Valitse peliaika ja aloita pelaaminen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
