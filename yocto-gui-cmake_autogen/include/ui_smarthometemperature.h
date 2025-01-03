/********************************************************************************
** Form generated from reading UI file 'smarthometemperature.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOMETEMPERATURE_H
#define UI_SMARTHOMETEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHomeTemperature
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btn_add_wtsapp;
    QPushButton *btn_remove_wtsapp;
    QTextEdit *te_whatsapp;
    QTextEdit *te_whatsapp_URL;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_10;
    QPushButton *btn_add_mail;
    QPushButton *btn_remove_mail;
    QTextEdit *te_mail;
    QTextEdit *te_mail_URL;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_11;
    QPushButton *btn_add_lcd;
    QPushButton *btn_remove_lcd;
    QTextEdit *te_lcd;
    QTextEdit *te_lcd_URL;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QTextEdit *te_local_URL;

    void setupUi(QDialog *SmartHomeTemperature)
    {
        if (SmartHomeTemperature->objectName().isEmpty())
            SmartHomeTemperature->setObjectName(QString::fromUtf8("SmartHomeTemperature"));
        SmartHomeTemperature->resize(896, 560);
        layoutWidget = new QWidget(SmartHomeTemperature);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 40, 643, 381));
        verticalLayout_12 = new QVBoxLayout(layoutWidget);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        btn_add_wtsapp = new QPushButton(layoutWidget);
        btn_add_wtsapp->setObjectName(QString::fromUtf8("btn_add_wtsapp"));

        verticalLayout_9->addWidget(btn_add_wtsapp);

        btn_remove_wtsapp = new QPushButton(layoutWidget);
        btn_remove_wtsapp->setObjectName(QString::fromUtf8("btn_remove_wtsapp"));

        verticalLayout_9->addWidget(btn_remove_wtsapp);


        horizontalLayout_7->addLayout(verticalLayout_9);

        te_whatsapp = new QTextEdit(layoutWidget);
        te_whatsapp->setObjectName(QString::fromUtf8("te_whatsapp"));

        horizontalLayout_7->addWidget(te_whatsapp);

        te_whatsapp_URL = new QTextEdit(layoutWidget);
        te_whatsapp_URL->setObjectName(QString::fromUtf8("te_whatsapp_URL"));

        horizontalLayout_7->addWidget(te_whatsapp_URL);


        verticalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        btn_add_mail = new QPushButton(layoutWidget);
        btn_add_mail->setObjectName(QString::fromUtf8("btn_add_mail"));

        verticalLayout_10->addWidget(btn_add_mail);

        btn_remove_mail = new QPushButton(layoutWidget);
        btn_remove_mail->setObjectName(QString::fromUtf8("btn_remove_mail"));

        verticalLayout_10->addWidget(btn_remove_mail);


        horizontalLayout_8->addLayout(verticalLayout_10);

        te_mail = new QTextEdit(layoutWidget);
        te_mail->setObjectName(QString::fromUtf8("te_mail"));

        horizontalLayout_8->addWidget(te_mail);

        te_mail_URL = new QTextEdit(layoutWidget);
        te_mail_URL->setObjectName(QString::fromUtf8("te_mail_URL"));

        horizontalLayout_8->addWidget(te_mail_URL);


        verticalLayout_12->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_9->addWidget(label_3);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        btn_add_lcd = new QPushButton(layoutWidget);
        btn_add_lcd->setObjectName(QString::fromUtf8("btn_add_lcd"));

        verticalLayout_11->addWidget(btn_add_lcd);

        btn_remove_lcd = new QPushButton(layoutWidget);
        btn_remove_lcd->setObjectName(QString::fromUtf8("btn_remove_lcd"));

        verticalLayout_11->addWidget(btn_remove_lcd);


        horizontalLayout_9->addLayout(verticalLayout_11);

        te_lcd = new QTextEdit(layoutWidget);
        te_lcd->setObjectName(QString::fromUtf8("te_lcd"));

        horizontalLayout_9->addWidget(te_lcd);

        te_lcd_URL = new QTextEdit(layoutWidget);
        te_lcd_URL->setObjectName(QString::fromUtf8("te_lcd_URL"));

        horizontalLayout_9->addWidget(te_lcd_URL);


        verticalLayout_12->addLayout(horizontalLayout_9);

        layoutWidget1 = new QWidget(SmartHomeTemperature);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 450, 321, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);

        te_local_URL = new QTextEdit(layoutWidget1);
        te_local_URL->setObjectName(QString::fromUtf8("te_local_URL"));

        horizontalLayout->addWidget(te_local_URL);


        retranslateUi(SmartHomeTemperature);

        QMetaObject::connectSlotsByName(SmartHomeTemperature);
    } // setupUi

    void retranslateUi(QDialog *SmartHomeTemperature)
    {
        SmartHomeTemperature->setWindowTitle(QCoreApplication::translate("SmartHomeTemperature", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SmartHomeTemperature", "Whatsapp Number", nullptr));
        btn_add_wtsapp->setText(QCoreApplication::translate("SmartHomeTemperature", "Add", nullptr));
        btn_remove_wtsapp->setText(QCoreApplication::translate("SmartHomeTemperature", "Remove", nullptr));
#if QT_CONFIG(whatsthis)
        te_whatsapp_URL->setWhatsThis(QCoreApplication::translate("SmartHomeTemperature", "<html><head/><body><p>Special URL</p><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        te_whatsapp_URL->setHtml(QCoreApplication::translate("SmartHomeTemperature", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SmartHomeTemperature", "   Mail   ", nullptr));
        btn_add_mail->setText(QCoreApplication::translate("SmartHomeTemperature", "Add", nullptr));
        btn_remove_mail->setText(QCoreApplication::translate("SmartHomeTemperature", "Remove", nullptr));
#if QT_CONFIG(whatsthis)
        te_mail_URL->setWhatsThis(QCoreApplication::translate("SmartHomeTemperature", "<html><head/><body><p>Special URL</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        te_mail_URL->setHtml(QCoreApplication::translate("SmartHomeTemperature", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SmartHomeTemperature", "    Lcd    ", nullptr));
        btn_add_lcd->setText(QCoreApplication::translate("SmartHomeTemperature", "Add", nullptr));
        btn_remove_lcd->setText(QCoreApplication::translate("SmartHomeTemperature", "Remove", nullptr));
#if QT_CONFIG(whatsthis)
        te_lcd_URL->setWhatsThis(QCoreApplication::translate("SmartHomeTemperature", "<html><head/><body><p>Special URL</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        te_lcd_URL->setHtml(QCoreApplication::translate("SmartHomeTemperature", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("SmartHomeTemperature", "publish", nullptr));
#if QT_CONFIG(whatsthis)
        te_local_URL->setWhatsThis(QCoreApplication::translate("SmartHomeTemperature", "<html><head/><body><p>Special URL</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        te_local_URL->setHtml(QCoreApplication::translate("SmartHomeTemperature", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
    class SmartHomeTemperature: public Ui_SmartHomeTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOMETEMPERATURE_H
