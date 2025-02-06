#include "smarthometemperature.h"
#include "ui_smarthometemperature.h"


SmartHomeTemperature::SmartHomeTemperature(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SmartHomeTemperature)
{
    ui->setupUi(this);
}

SmartHomeTemperature::~SmartHomeTemperature()
{
    delete ui;
}

void SmartHomeTemperature::on_btn_add_wtsapp_clicked()
{
    std::string the_number = ui->te_whatsapp->toPlainText().toStdString();
    ui->te_whatsapp->clear();
    _whatsapp = new Whatsapp_reaction(the_number);
    _sensor.addSubscriber(_whatsapp);
}


void SmartHomeTemperature::on_btn_remove_wtsapp_clicked()
{
    _sensor.removeSubscriber(_whatsapp);
}


void SmartHomeTemperature::on_btn_add_mail_clicked()
{
    std::string the_number = ui->te_mail->toPlainText().toStdString();
    ui->te_mail->clear();
    _mail = new Mail_reaction(the_number);
    _sensor.addSubscriber(_mail);
}


void SmartHomeTemperature::on_btn_remove_mail_clicked()
{
    _sensor.removeSubscriber(_mail);
}


void SmartHomeTemperature::on_btn_add_lcd_clicked()
{
    std::string the_number = ui->te_lcd->toPlainText().toStdString();
    ui->te_lcd->clear();
    _lcd = new LCD(the_number);
    _sensor.addSubscriber(_lcd);
}


void SmartHomeTemperature::on_btn_remove_lcd_clicked()
{
    _sensor.removeSubscriber(_lcd);
}


void SmartHomeTemperature::on_pushButton_7_clicked()
{
    _sensor.ChangeTemperature(17);
}

