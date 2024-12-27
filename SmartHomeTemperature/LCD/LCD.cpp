#include "LCD.h"
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
LCD::LCD(std::string driver_dir):_driver_dir{driver_dir} {

}


void LCD::temperatureRaised(int value){
	std::cout << "LCD should have " << value << "at directory " << _driver_dir;
}

