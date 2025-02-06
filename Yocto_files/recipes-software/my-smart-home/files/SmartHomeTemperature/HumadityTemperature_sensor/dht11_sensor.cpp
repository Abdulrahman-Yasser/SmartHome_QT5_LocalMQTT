#include "dht11_sensor.h"
#include <iostream>
#include <fstream>
#include <string>

DHT11_sensor::DHT11_sensor(std::string file):the_file{file} {
}

int DHT11_sensor::read_data(){
    system("echo 'read_dht.py'");
}
