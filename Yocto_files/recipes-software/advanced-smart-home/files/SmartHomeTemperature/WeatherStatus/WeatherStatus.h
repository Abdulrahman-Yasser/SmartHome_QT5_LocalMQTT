#ifndef WEATHERSTATUS_H
#define WEATHERSTATUS_H

#include "../Notifier/Notifier.h"

#include <list>

class WeatherStatus
{
public:
    WeatherStatus();
    void ChangeTemperature(int value);
    void addSubscriber(Notifier *newSubscriber);
    void removeSubscriber(Notifier *Subscriber);
private :
    void notify();
    std::list<Notifier *> my_subscriper;
    int _value;
};

#endif // WeatherStatus_H
