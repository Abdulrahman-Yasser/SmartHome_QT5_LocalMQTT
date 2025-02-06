#ifndef DHT11_SENSOR_H
#define DHT11_SENSOR_H

#include <string>

class DHT11_sensor
{
public:
    DHT11_sensor(std::string file);
    int read_data();
private:
    int _data;
    std::string the_file;
};
#endif // DHT11_SENSOR_H
