#include "Whatsapp_reaction.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <QDebug>

Whatsapp_reaction::Whatsapp_reaction(std::string n) : _the_number{n}{}


void Whatsapp_reaction::temperatureRaised(int value){
	std::cout << "Phone call for " << _the_number << " " << value;
    system("echo 'sending the whatsapp'");
}
