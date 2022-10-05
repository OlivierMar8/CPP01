//Weapon.cpp	CPP01 / ex03

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( void ) {

	return;
}

Weapon::Weapon( std::string name) : _name(name) {

	return;
}

Weapon::~Weapon( void ) {

	return;
}

std::string	Weapon::getName( void) const {

	return (this->_name);
}

void	Weapon::setName( std::string name) {

	this->_name = name;
}


