#include "WeatherStatus.h"
const std::string ADDRESS("tcp://localhost:1883");
const std::string CLIENT_ID("WeatherStationID");

WeatherStatus::WeatherStatus(): my_subscriber_client(mqtt::async_client( ADDRESS, CLIENT_ID)){
    mqtt_connect();    
}

void WeatherStatus::notify(){
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        (*it)->temperatureRaised(_value);
        (*it)->notifier_publish_data("a7a ya 3am");
        it++;
    }
}

void WeatherStatus::send(std::string _topic, std::string _payload){
    std::string payload = _payload;
    int qos = 1;
    bool retained = false;

    my_subscriber_client.publish(full_topic, payload, qos, retained);

    // std::this_thread::sleep_for(std::chrono::seconds(2));
}


void WeatherStatus::change_global_url(std::string _global_url){
    url_changed = 1;
    global_topic = _global_url;
    full_topic = global_topic + local_topic;
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        (*it)->change_global_url(full_topic);
        it++;
    }
}



void WeatherStatus::ChangeTemperature(int value, std::string _topic){
    _value = value;
    notify();
}

bool WeatherStatus::mqtt_connect(void){
    if( my_subscriber_client.is_connected() ){
        return true;
    }
    try{



        my_subscriber_client.set_callback(*this);

        mqtt::connect_options my_conn_opts;
        my_conn_opts.set_keep_alive_interval(15);
        my_conn_opts.set_clean_session(true);

        my_subscriber_client.connect(my_conn_opts)->wait();

    } catch(const mqtt::exception& exec){
        std::cerr << "Error: " << exec.what() << std::endl;
    }

}

bool WeatherStatus::mqtt_disconnect(void){
    if(my_subscriber_client.is_connected()){
        my_subscriber_client.disconnect()->wait();
        return true;
    }
    return false;
}



mqtt::async_client* WeatherStatus::get_mqtt_clinet(void){
    return &my_subscriber_client;
}


void WeatherStatus::addSubscriber(Notifier *newSubscriber) {
    my_subscriper.push_back(newSubscriber);
}

void WeatherStatus::removeSubscriber(Notifier *Subscriber) {
    if(my_subscriper.empty()){
        return;
    }
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        if (Subscriber == *it){
            my_subscriper.remove(Subscriber);
        }
        ++it;
    }
}

void WeatherStatus::connected(const std::string &cause){
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        (*it)->notifier_connected();
        it++;
    }
    std::cout << "Connected successfully" << std::endl;
}

void WeatherStatus::message_arrived(mqtt::const_message_ptr msg){
    std::cout << "Done !!!" << std::endl;
}

void WeatherStatus::connection_lost(const std::string &cause){
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        (*it)->notifier_disconnected();
        it++;
    }
    std::cout << "Connection lost !!!" << cause << std::endl;
}

void WeatherStatus::delivery_complete(mqtt::delivery_token_ptr token){
    std::cout << "Done, it supposed to be safely dilivered " << std::endl;
    std::cout << "It delivered msg_id: " << token->get_message_id()
    << " For a client: " << token->get_client() << " message: " << token->get_message();
}
