#include "home_weather.h"
#include "ui_home_weather.h"

Home_Weather::Home_Weather(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Home_Weather)
{
    ui->setupUi(this);
}

Home_Weather::~Home_Weather()
{
    delete ui;
}
