/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_sh_leds;
    QPushButton *btn_sh_Temp;
    QPushButton *pushButton;
    QTextEdit *te_globl_url;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_sh_leds = new QPushButton(centralwidget);
        btn_sh_leds->setObjectName(QString::fromUtf8("btn_sh_leds"));
        btn_sh_leds->setGeometry(QRect(290, 10, 211, 81));
        btn_sh_Temp = new QPushButton(centralwidget);
        btn_sh_Temp->setObjectName(QString::fromUtf8("btn_sh_Temp"));
        btn_sh_Temp->setGeometry(QRect(290, 100, 211, 81));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 430, 161, 81));
        te_globl_url = new QTextEdit(centralwidget);
        te_globl_url->setObjectName(QString::fromUtf8("te_globl_url"));
        te_globl_url->setGeometry(QRect(380, 410, 244, 120));
        MainWindow->setCentralWidget(centralwidget);
        pushButton->raise();
        btn_sh_leds->raise();
        btn_sh_Temp->raise();
        te_globl_url->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_sh_leds->setText(QCoreApplication::translate("MainWindow", "Smart Home Leds", nullptr));
        btn_sh_Temp->setText(QCoreApplication::translate("MainWindow", "Smart-Home Temperature", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Publish global URL", nullptr));
#if QT_CONFIG(whatsthis)
        te_globl_url->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Special URL</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        te_globl_url->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
