#include "smarthome_leds.h"
#include "ui_smarthome_leds.h"

SmartHome_leds::SmartHome_leds(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SmartHome_leds)
{
    ui->setupUi(this);
}

SmartHome_leds::~SmartHome_leds()
{
    delete ui;
}



