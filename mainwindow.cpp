#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QVector>
#include <QString>
#include <string>

#include "SmartHomeLeds/smarthome_leds.h"
#include "SmartHomeTemperature/smarthometemperature.h"

QVector<QString> vector;

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


void MainWindow::on_btn_sh_leds_clicked()
{
    SmartHome_leds sh_leds;
    sh_leds.exec();
}


void MainWindow::on_btn_sh_Temp_clicked()
{
    SmartHomeTemperature sh_home;
    sh_home.exec();
}


void MainWindow::on_pushButton_clicked()
{
    std::string the_number = ui->globl_url->toPlainText().toStdString();
    ui->globl_url->clear();
}

