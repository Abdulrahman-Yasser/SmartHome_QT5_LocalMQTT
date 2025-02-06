#include "control_leds.h"
#include "ui_control_leds.h"

Control_LEDs::Control_LEDs(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Control_LEDs)
{
    ui->setupUi(this);
}

Control_LEDs::~Control_LEDs()
{
    delete ui;
}
