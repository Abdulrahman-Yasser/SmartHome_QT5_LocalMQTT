#ifndef MAIL_REACTION_H
#define MAIL_REACTION_H


#include "../Notifier/Notifier.h"
#include <QDebug>


class Mail_reaction : public Notifier
{
public:
    Mail_reaction(std::string the_mail, std::string _global_topic, std::string mail_topic, mqtt::async_client* _client);
    void temperatureRaised(int value);
private:
    std::string _mail;
};

#endif // MAIL_REACTION_H
