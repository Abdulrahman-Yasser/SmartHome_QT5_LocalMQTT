#include "Mail_reaction.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
Mail_reaction::Mail_reaction(std::string the_mail): _mail{the_mail} {}

void Mail_reaction::temperatureRaised(int value){
	std::cout << "Sending a mail for " << _mail << " " << value;
    system("echo 'sending the mail'");
}
