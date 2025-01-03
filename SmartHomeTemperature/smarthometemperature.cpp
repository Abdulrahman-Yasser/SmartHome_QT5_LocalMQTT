#include "smarthometemperature.h"
#include "SmartHomeTemperature/ui_smarthometemperature.h"
#include "ui_smarthometemperature.h"


SmartHomeTemperature::SmartHomeTemperature(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SmartHomeTemperature)
{
    ui->setupUi(this);
    
}

SmartHomeTemperature::~SmartHomeTemperature()
{
    _sensor.mqtt_disconnect();
    delete ui;
}

void SmartHomeTemperature::on_btn_add_wtsapp_clicked()
{
    std::string the_number = ui->te_whatsapp->toPlainText().toStdString();
    std::string whatsapp_url = ui->te_whatsapp_URL->toPlainText().toStdString();
    ui->te_whatsapp->clear();
    ui->te_whatsapp_URL->clear();
    _whatsapp = new Whatsapp_reaction(the_number, full_URL, whatsapp_url, _sensor.get_mqtt_clinet());
    _sensor.addSubscriber(_whatsapp);
}


void SmartHomeTemperature::on_btn_remove_wtsapp_clicked()
{
    std::string the_number = ui->te_whatsapp->toPlainText().toStdString();
    _sensor.removeSubscriber(_whatsapp);
}


void SmartHomeTemperature::on_btn_add_mail_clicked()
{
    std::string the_mail = ui->te_mail->toPlainText().toStdString();
    std::string mail_url = ui->te_mail_URL->toPlainText().toStdString();
    ui->te_mail->clear();
    ui->te_mail_URL->clear();
    _mail = new Mail_reaction(the_mail, full_URL, mail_url, _sensor.get_mqtt_clinet());
    _sensor.addSubscriber(_mail);
}


void SmartHomeTemperature::on_btn_remove_mail_clicked()
{
    _sensor.removeSubscriber(_mail);
}


void SmartHomeTemperature::on_btn_add_lcd_clicked()
{
    std::string the_lcd_path = ui->te_lcd->toPlainText().toStdString();
    std::string lcd_url = ui->te_lcd_URL->toPlainText().toStdString();
    ui->te_lcd->clear();
    ui->te_lcd_URL->clear();
    _lcd = new LCD(the_lcd_path, full_URL, lcd_url, _sensor.get_mqtt_clinet());
    _sensor.addSubscriber(_lcd);
}


void SmartHomeTemperature::on_btn_remove_lcd_clicked()
{
    _sensor.removeSubscriber(_lcd);
}


void SmartHomeTemperature::on_pushButton_7_clicked()
{
    if(!ui->te_local_URL->document()->isEmpty()){
        local_URL = ui->te_local_URL->toPlainText().toStdString();
        full_URL = global_URL + local_URL;
        _sensor.change_global_url(full_URL);
    }
    _sensor.ChangeTemperature(17);
}

