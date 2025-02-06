#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QVector>
#include <QString>

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

void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        vector.append("UART");
    }
    if(ui->checkBox_2->isChecked()){
        vector.append("SPI");
    }
    if(ui->checkBox_3->isChecked()){
        vector.append("I2C");
    }
    ui->textBrowser->clear();
    for(int i = 0; i < vector.length(); i++) {
        ui->textBrowser->append(vector[i]);
    }
    vector.clear();
}
