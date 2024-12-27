#include "Whatsapp_reaction.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <QDebug>

Whatsapp_reaction::Whatsapp_reaction(std::string n) : _the_number{n}{}

bool Whatsapp_reaction::LookupForThatNummber(std::string n){
    if (n.compare( _the_number) == 0){
        return true;
    }
    return false;
}

void Whatsapp_reaction::temperatureRaised(int value){
	std::cout << "Phone call for " << _the_number << " " << value;
    system("echo 'sending the whatsapp'");
}
