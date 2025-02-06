#ifndef CONTROL_LEDS_H
#define CONTROL_LEDS_H

#include <QDialog>

namespace Ui {
class Control_LEDs;
}

class Control_LEDs : public QDialog
{
    Q_OBJECT

public:
    explicit Control_LEDs(QWidget *parent = nullptr);
    ~Control_LEDs();

private:
    Ui::Control_LEDs *ui;
};

#endif // CONTROL_LEDS_H
