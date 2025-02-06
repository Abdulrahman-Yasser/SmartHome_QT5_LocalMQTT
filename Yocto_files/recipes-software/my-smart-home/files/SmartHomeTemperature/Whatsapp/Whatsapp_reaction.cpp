#include "Whatsapp_reaction.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <QDebug>


Whatsapp_reaction::Whatsapp_reaction(std::string n, std::string global_topic, std::string whatsapp_topic, mqtt::async_client* _client):
Notifier{global_topic, whatsapp_topic, _client}, _the_number{n}{
    
}

bool Whatsapp_reaction::LookupForThatNummber(std::string n){
    if (n.compare( _the_number) == 0){
        return true;
    }
    return false;
}

void Whatsapp_reaction::temperatureRaised(int value){
    std::string message =  "Phone call for " + _the_number + " " + std::to_string(value);
	std::cout << message;

    system("echo 'sending the whatsapp command'");

    notifier_publish_data(message);
}
