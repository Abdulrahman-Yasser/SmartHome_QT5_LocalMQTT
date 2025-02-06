/********************************************************************************
** Form generated from reading UI file 'smarthome_leds.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOME_LEDS_H
#define UI_SMARTHOME_LEDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHome_leds
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cb_blue_led;
    QVBoxLayout *verticalLayout;
    QCheckBox *cb_blue_led_1;
    QCheckBox *cb_blue_led_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cb_red_led;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cb_red_led_1;
    QCheckBox *cb_red_led_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cb_ylw_led;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cb_ylw_led_1;
    QCheckBox *cb_ylw_led_2;

    void setupUi(QDialog *SmartHome_leds)
    {
        if (SmartHome_leds->objectName().isEmpty())
            SmartHome_leds->setObjectName(QString::fromUtf8("SmartHome_leds"));
        SmartHome_leds->resize(522, 444);
        pushButton = new QPushButton(SmartHome_leds);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 390, 121, 41));
        widget = new QWidget(SmartHome_leds);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 399, 321));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cb_blue_led = new QCheckBox(widget);
        cb_blue_led->setObjectName(QString::fromUtf8("cb_blue_led"));

        horizontalLayout->addWidget(cb_blue_led);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cb_blue_led_1 = new QCheckBox(widget);
        cb_blue_led_1->setObjectName(QString::fromUtf8("cb_blue_led_1"));

        verticalLayout->addWidget(cb_blue_led_1);

        cb_blue_led_2 = new QCheckBox(widget);
        cb_blue_led_2->setObjectName(QString::fromUtf8("cb_blue_led_2"));

        verticalLayout->addWidget(cb_blue_led_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cb_red_led = new QCheckBox(widget);
        cb_red_led->setObjectName(QString::fromUtf8("cb_red_led"));

        horizontalLayout_2->addWidget(cb_red_led);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cb_red_led_1 = new QCheckBox(widget);
        cb_red_led_1->setObjectName(QString::fromUtf8("cb_red_led_1"));

        verticalLayout_2->addWidget(cb_red_led_1);

        cb_red_led_2 = new QCheckBox(widget);
        cb_red_led_2->setObjectName(QString::fromUtf8("cb_red_led_2"));

        verticalLayout_2->addWidget(cb_red_led_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cb_ylw_led = new QCheckBox(widget);
        cb_ylw_led->setObjectName(QString::fromUtf8("cb_ylw_led"));

        horizontalLayout_3->addWidget(cb_ylw_led);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        cb_ylw_led_1 = new QCheckBox(widget);
        cb_ylw_led_1->setObjectName(QString::fromUtf8("cb_ylw_led_1"));

        verticalLayout_3->addWidget(cb_ylw_led_1);

        cb_ylw_led_2 = new QCheckBox(widget);
        cb_ylw_led_2->setObjectName(QString::fromUtf8("cb_ylw_led_2"));

        verticalLayout_3->addWidget(cb_ylw_led_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(SmartHome_leds);

        QMetaObject::connectSlotsByName(SmartHome_leds);
    } // setupUi

    void retranslateUi(QDialog *SmartHome_leds)
    {
        SmartHome_leds->setWindowTitle(QCoreApplication::translate("SmartHome_leds", "Control Leds", nullptr));
        pushButton->setText(QCoreApplication::translate("SmartHome_leds", "Publish", nullptr));
        cb_blue_led->setText(QCoreApplication::translate("SmartHome_leds", "Blue Leds Subscripe", nullptr));
        cb_blue_led_1->setText(QCoreApplication::translate("SmartHome_leds", "Led 1", nullptr));
        cb_blue_led_2->setText(QCoreApplication::translate("SmartHome_leds", "Led 2", nullptr));
        cb_red_led->setText(QCoreApplication::translate("SmartHome_leds", "Red Leds Subscripe", nullptr));
        cb_red_led_1->setText(QCoreApplication::translate("SmartHome_leds", "Led 1", nullptr));
        cb_red_led_2->setText(QCoreApplication::translate("SmartHome_leds", "Led 2", nullptr));
        cb_ylw_led->setText(QCoreApplication::translate("SmartHome_leds", "Yellow Leds Subscripe", nullptr));
        cb_ylw_led_1->setText(QCoreApplication::translate("SmartHome_leds", "Led 1", nullptr));
        cb_ylw_led_2->setText(QCoreApplication::translate("SmartHome_leds", "Led 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartHome_leds: public Ui_SmartHome_leds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOME_LEDS_H
