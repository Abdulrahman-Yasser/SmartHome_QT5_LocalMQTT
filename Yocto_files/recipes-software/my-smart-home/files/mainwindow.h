#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void sending_string_to_windows(std::string the_string);
private slots:

    void on_btn_sh_leds_clicked();

    void slot_for_signal();

    void on_btn_sh_Temp_clicked();

    void on_pushButton_clicked();
    
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
