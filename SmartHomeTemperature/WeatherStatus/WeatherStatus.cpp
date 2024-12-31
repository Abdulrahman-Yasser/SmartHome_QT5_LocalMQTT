#include "WeatherStatus.h"

WeatherStatus::WeatherStatus() {
    try{
        my_subscriber_client.set_callback(*this);

        mqtt::connect_options my_conn_opts;
        my_conn_opts.set_keep_alive_interval(15);
        my_conn_opts.set_clean_session(true);

        my_subscriber_client.connect(my_conn_opts)->wait();

    } catch(const mqtt::exception& exec){
        std::cerr << "Error: " << exec.what() << std::endl;
        return 1;

    }
    
}

void WeatherStatus::notify(){
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        (*it)->temperatureRaised(_value);
        it++;
    }
}

void WeatherStatus::send(std::string _topic, std::string _payload){
    std::string topic = global_URL + "/" + local_URL + "/" + _topic;
    std::string payload = _payload;
    int qos = 1;
    bool retained = false;

    my_subscriber_client.publish(topic, payload, qos, retained);

    // std::this_thread::sleep_for(std::chrono::seconds(2));
}





void WeatherStatus::ChangeTemperature(int value, std::String _topic){
    _value = value;
    notify();
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

void WeatherStatus::connected(const std::string &cause) override{ 
    std::cout << "Connected successfully" << std::endl;
}
void WeatherStatus::message_arrived(mqtt::const_message_ptr msg) override{
    std::cout << "Done !!!" << std::endl;
}
void WeatherStatus::connection_lost(const std::string &cause) override{
    std::cout << "Connection lost !!!" << cause << std::endl;
}
void WeatherStatus::delivery_complete(mqtt::delivery_token_ptr token) override{
    std::cout << "Done, it supposed to be safely dilivered " << std::endl;
    std::cout << "It delivered msg_id: " << token->get_message_id()
    << " For a client: " << token->get_client() << " message: " << token->get_message();
}
