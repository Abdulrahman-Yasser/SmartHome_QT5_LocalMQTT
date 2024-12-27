#ifndef WEATHERSTATUS_H
#define WEATHERSTATUS_H

#include "../Notifier/Notifier.h"
#include "../Observer/Observer.h"


class WeatherStatus : public Observer
{
public:
    WeatherStatus();
    void ChangeTemperature(int value);
    virtual void addSubscriber(Notifier *newSubscriber) override;
    virtual void removeSubscriber(Notifier *Subscriber) override;
private :
    std::list<Notifier *> my_subscriper;
    void notify();
    int _value;
};

#endif // WeatherStatus_H
