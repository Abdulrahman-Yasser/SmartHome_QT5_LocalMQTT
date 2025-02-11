#ifndef SMARTHOMETEMPERATURE_H
#define SMARTHOMETEMPERATURE_H

#include "WeatherStatus/WeatherStatus.h"
#include "Whatsapp/Whatsapp_reaction.h"
#include "Mail/Mail_reaction.h"
#include "LCD/LCD.h"

#include <QDialog>

namespace Ui {
class SmartHomeTemperature;
}

class SmartHomeTemperature : public QDialog
{
    Q_OBJECT

public:
    explicit SmartHomeTemperature(QWidget *parent = nullptr);
    ~SmartHomeTemperature();

private slots:
    void on_btn_add_wtsapp_clicked();

    void on_btn_remove_wtsapp_clicked();

    void on_btn_add_mail_clicked();

    void on_btn_remove_mail_clicked();

    void on_btn_add_lcd_clicked();

    void on_btn_remove_lcd_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::SmartHomeTemperature *ui;
    WeatherStatus _sensor;

    Whatsapp_reaction *_whatsapp;
    Mail_reaction *_mail;
    LCD *_lcd;
};

#endif // SMARTHOMETEMPERATURE_H
