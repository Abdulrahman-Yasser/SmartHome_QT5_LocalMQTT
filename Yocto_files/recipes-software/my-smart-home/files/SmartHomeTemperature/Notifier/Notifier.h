#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <string>

#include <mqtt/async_client.h>

class Notifier
{
public:
    Notifier(std::string _global_topic,std::string _notifier_topic, mqtt::async_client *_client);
    virtual void temperatureRaised(int value) = 0;
    void change_url(std::string new_url);
    void change_global_url(std::string new_url);
    void notifier_connected(void);
    void notifier_disconnected(void);
    virtual void notifier_publish_data(std::string msg);
protected:
    void change_local_url(std::string new_url);
private:
    std::string global_url;
    std::string notifier_topic;
    std::string full_url;
    bool is_connected;
    mqtt::async_client *notifier_client;
};

#endif // NOTIFIER_H
