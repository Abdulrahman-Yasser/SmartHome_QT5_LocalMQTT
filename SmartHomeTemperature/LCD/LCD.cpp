#include "LCD.h"
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

LCD::LCD(std::string driver_dir, std::string _topic, mqtt::async_client* _client):
Notifier(_topic, _client), _driver_dir(driver_dir)  {

}


void LCD::temperatureRaised(int value){
	std::string message = "LCD should have " << value << "at directory " << _driver_dir;
	std::cout << message;

	notifier_publish_data(message);
}

