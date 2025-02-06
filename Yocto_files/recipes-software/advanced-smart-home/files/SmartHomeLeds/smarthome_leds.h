#ifndef SMARTHOME_LEDS_H
#define SMARTHOME_LEDS_H

#include <QDialog>

namespace Ui {
class SmartHome_leds;
}

class SmartHome_leds : public QDialog
{
    Q_OBJECT

public:
    explicit SmartHome_leds(QWidget *parent = nullptr);
    ~SmartHome_leds();


private:
    Ui::SmartHome_leds *ui;
};

#endif // SMARTHOME_LEDS_H
