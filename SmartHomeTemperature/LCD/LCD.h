#ifndef LCD_H
#define LCD_H

#include "../Notifier/Notifier.h"
#include <string>

class LCD : public Notifier
{
public:
    LCD(std::string driver_dir, std::string _topic, mqtt::async_client* _client);
    void temperatureRaised(int value);
private :
    std::string _driver_dir;
};

#endif // LCD_H
