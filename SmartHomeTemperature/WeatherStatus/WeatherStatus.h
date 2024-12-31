#ifndef WEATHERSTATUS_H
#define WEATHERSTATUS_H

#include "../Notifier/Notifier.h"
#include "../Observer/Observer.h"

#include <mqtt/async_client.h>
#include <mqtt/callback.h>


class WeatherStatus : public Observer, mqtt::callback
{
public:
    WeatherStatus();

    void ChangeTemperature(int value, std::string _topic);
    virtual void addSubscriber(Notifier *newSubscriber) override;
    virtual void removeSubscriber(Notifier *Subscriber) override;

    virtual void connected(const std::string &cause) override;
    virtual void message_arrived(mqtt::const_message_ptr msg) override;
    virtual void connection_lost(const std::string &cause) override;
    virtual void delivery_complete(mqtt::delivery_token_ptr token) override;

    void notify();
private:
    std::string global_topic;
    mqtt::async_client my_subscriber_client;
    std::list<Notifier *> my_subscriper;
    int _value;
};

#endif // WeatherStatus_H
