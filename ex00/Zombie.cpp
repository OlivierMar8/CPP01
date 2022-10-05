//Zombie.cpp	CPP01 / ex00

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) {

	return;
}

Zombie::Zombie( std::string name ) : _name(name) {

	return;
}

Zombie::~Zombie( void ) {

	std::cout << _name << ": destructor called" << std::endl;
	return;
}

std::string	Zombie::getName( void ) const {

	return this->_name;
}

void	Zombie::setName( std::string name ) {

	this->_name = name;
	return;
}

void	Zombie::announce( void ) const {

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

