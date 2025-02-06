#include "WeatherStatus.h"

WeatherStatus::WeatherStatus() {}

void WeatherStatus::notify(){
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        (*it)->temperatureRaised(_value);
        it++;
    }
}

void WeatherStatus::ChangeTemperature(int value){
    _value = value;
    notify();
}

void WeatherStatus::addSubscriber(Notifier *newSubscriber){
    my_subscriper.push_back(newSubscriber);
}

void WeatherStatus::removeSubscriber(Notifier *Subscriber){
    std::list<Notifier *>::iterator it = my_subscriper.begin();
    while(it != my_subscriper.end()){
        if (Subscriber == *it){
            my_subscriper.remove(Subscriber);
        }
        ++it;
    }
}
