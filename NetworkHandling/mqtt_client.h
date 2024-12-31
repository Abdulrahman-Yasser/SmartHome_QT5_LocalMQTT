#ifndef MQTT_CLIENT
#define MQTT_CLIENT

#include <>
#include <string>

 #include <QMqttClient>

class Mqtt_Client{
    public:
        Mqtt_Client(std::string url);
        void connect();
        virtual void connection_lost() = 0;
        virtual void connection_lost() = 0;
        virtual void send_data() = 0;
    protected:
        std::string _url;
}


#endif