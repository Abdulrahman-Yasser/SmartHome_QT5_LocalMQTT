#include "Notifier.h"


Notifier::Notifier(std::string _global_topic,std::string _notifier_topic, mqtt::async_client *_client):
        global_url(_global_topic), notifier_topic(_notifier_topic), notifier_client(_client), full_url(global_url + notifier_topic)
        {}


void Notifier::notifier_publish_data(std::string msg){
    std::cout << "Notifier topic is : " << full_url << " and the message is : " << msg << std::endl;
    if (!is_connected){
        std::cout << "Notifier disconnected !" << std::endl;
        return;
    }
    int qos = 1;
    bool retained = false;

	notifier_client->publish(full_url, msg, qos, retained);

}

void Notifier::change_global_url(std::string new_url){
    global_url = new_url;
    full_url = global_url + notifier_topic;
}

void Notifier::change_local_url(std::string new_url){
    notifier_topic = new_url;
    full_url = global_url + notifier_topic;
}



void Notifier::notifier_connected(void){
    is_connected = true;
}

void Notifier::notifier_disconnected(void){
    is_connected = false;
}
