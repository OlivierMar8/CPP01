//Zombie.cpp	CPP01 / ex00

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie::Zombie( void ) {

	return;
}

Zombie::~Zombie( void ) {

	return;
}

std::string	Zombie::getName( void ) const {

	return this->_name;
}

void	Zombie::setName( std::string name ) {

	this->_name = name;
	return;
}

void	Zombie::announce( void ) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

