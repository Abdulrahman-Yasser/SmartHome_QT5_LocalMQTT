#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Home_Weather/home_weather.h"
#include "Control_LEDs/control_leds.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_weather_status_clicked()
{
    Home_Weather my_home_weather;
    my_home_weather.exec();
}


void MainWindow::on_btn_control_leds_clicked()
{
    Control_LEDs my_leds;
    my_leds.exec();
}

