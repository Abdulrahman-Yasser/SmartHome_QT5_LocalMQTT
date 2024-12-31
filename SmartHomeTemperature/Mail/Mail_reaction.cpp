#include "Mail_reaction.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

Mail_reaction::Mail_reaction(std::string the_mail, std::string _topic, mqtt::async_client* _client):
Notifier{_topic, _client}, _mail{the_mail},  {}

void Mail_reaction::temperatureRaised(int value){
	std::string message = "Sending a mail for " + _mail + " " + value;
    system("echo 'sending the mail command'");
    std::cout << message;
    notifier_publish_data(message);
}
