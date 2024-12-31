#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <string>

#include <mqtt/async_client.h>

class Notifier
{
public:
    Notifier(std::string _topic, mqtt::async_client *_client);
    virtual void temperatureRaised(int value) = 0;
protected:
    virtual void notifier_publish_data(std::string msg);
    std::string notifier_topic;
    mqtt::async_client *notifier_client;
};

#endif // NOTIFIER_H
