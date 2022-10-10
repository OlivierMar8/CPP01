//Harl.cpp	CPP01 / ex06

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void ) {

	return;
}

Harl::~Harl( void ) {

	return;

}

void	Harl::complain( std::string level ) {

	(void)level;
	int	i = 0;

	void (Harl::*level_ptr[])( void ) = {&Harl::debug,  &Harl::info, &Harl::warning, \
		&Harl::error} ;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0 : (this->*level_ptr[0])();
		case 1 : (this->*level_ptr[1])();
		case 2 : (this->*level_ptr[2])();
		case 3 : (this->*level_ptr[3])();
				 break;
		default : std::cout << "[ Probable complaining about "
				 "insignificant problems ]" << std::endl;
	}
	return;
}

void	Harl::debug ( void ) {

	std::cout << "I love having extra bacon for my " 
			"7XL-double-cheese-triple-pickle-special-ketchup "
			"burger. I really do!" << std::endl;
	return;
}

void	Harl::info ( void ) {

	std::cout << "I cannot believe adding extra bacon costs " 
		"more money. You didn't put enough bacon in my burger! "
		"If you did, I wouldn't be asking for more!" << std::endl;
	return;
}

void	Harl::warning ( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. "
		"I've been coming for years whereas you started working here since "
		"last month!" << std::endl;
	return;
}

void	Harl::error ( void ) {

	std::cout << "This is unacceptable ! I want to speak to the manager now."
	   	<< std::endl;
	return;
}
