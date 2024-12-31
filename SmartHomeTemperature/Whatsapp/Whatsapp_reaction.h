#ifndef WHATSAPP_REACTION_H
#define WHATSAPP_REACTION_H

#include "../Notifier/Notifier.h"

#include <string>


class Whatsapp_reaction : public Notifier
{
public:
    Whatsapp_reaction(std::string n, std::string _topic, mqtt::async_client* _client);
    void temperatureRaised(int value);
    bool LookupForThatNummber(std::string n);
private:
    std::string _the_number;
};

#endif // WHATSAPP_REACTION_H
