#include "Notifier.h"


Notifier::Notifier(std::string _topic, mqtt::async_client *_client)
        :notifier_topic(_topic), notifier_client(_client)
        {}


void Notifier::notifier_publish_data(std::string msg){
    int qos = 1;
    bool retained = false;

	notifier_client->publish(notifier_topic, msg, qos, retained);

}
