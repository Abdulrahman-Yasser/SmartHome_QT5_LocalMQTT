#ifndef HOME_WEATHER_H
#define HOME_WEATHER_H

#include <QDialog>

namespace Ui {
class Home_Weather;
}

class Home_Weather : public QDialog
{
    Q_OBJECT

public:
    explicit Home_Weather(QWidget *parent = nullptr);
    ~Home_Weather();

private:
    Ui::Home_Weather *ui;
};

#endif // HOME_WEATHER_H
