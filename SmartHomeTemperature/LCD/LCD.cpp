#include "LCD.h"
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

LCD::LCD(std::string driver_dir, std::string _global_topic, std::string lcd_topic, mqtt::async_client* _client):
Notifier(_global_topic, lcd_topic, _client), _driver_dir(driver_dir)  {

}


void LCD::temperatureRaised(int value){
    std::string message = "LCD should have " + std::to_string( value ) + "at directory " + _driver_dir;
	std::cout << message;

	notifier_publish_data(message);
}

