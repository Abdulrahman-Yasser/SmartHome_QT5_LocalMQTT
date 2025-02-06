#ifndef WEATHERSTATUS_H
#define WEATHERSTATUS_H

#include "../Notifier/Notifier.h"
#include "../Observer/Observer.h"

#include <mqtt/async_client.h>
#include <mqtt/callback.h>
#include <string>

class WeatherStatus : public Observer, mqtt::callback
{
public:
    WeatherStatus();

    void ChangeTemperature(int value, std::string _topic = "");
    virtual void removeSubscriber(Notifier *Subscriber) override;
    virtual void addSubscriber(Notifier *newSubscriber) override;

    virtual void connected(const std::string &cause) override;
    virtual void message_arrived(mqtt::const_message_ptr msg) override;
    virtual void connection_lost(const std::string &cause) override;
    virtual void delivery_complete(mqtt::delivery_token_ptr token) override;
    mqtt::async_client* get_mqtt_clinet(void);
    void change_global_url(std::string _global_url);
    bool mqtt_connect(void);
    bool mqtt_disconnect(void);

    void notify();
private:
    void send(std::string _topic, std::string _payload);
    std::string local_topic;
    std::string full_topic;
    std::string global_topic;
    int url_changed = 0;
    mqtt::async_client my_subscriber_client;

    std::list<Notifier *> my_subscriper;
    int _value;
};

#endif // WeatherStatus_H
