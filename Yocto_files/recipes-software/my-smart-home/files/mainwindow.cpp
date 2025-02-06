#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QVector>
#include <QString>
#include <string>

#include "SmartHomeLeds/smarthome_leds.h"
#include "SmartHomeTemperature/smarthometemperature.h"

#include <QObject> 

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

void MainWindow::slot_for_signal(){
    emit sending_string_to_windows(ui->te_globl_url->toPlainText().toStdString());
}


void MainWindow::on_btn_sh_Temp_clicked()
{
    SmartHomeTemperature sh_home;
    // QObject::connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::slot_for_signal);
    // QObject::connect(this, &MainWindow::sending_string_to_windows, &sh_home, &SmartHomeTemperature::glbal_URL_changed);
    sh_home.glbal_URL_changed(ui->te_globl_url->toPlainText().toStdString());
    sh_home.exec();
}


void MainWindow::on_pushButton_clicked()
{
    std::string the_global_url = ui->te_globl_url->toPlainText().toStdString();
    ui->te_globl_url->clear();
}

