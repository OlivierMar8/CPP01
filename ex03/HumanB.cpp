//HumanB.cpp	CPP01 / ex03

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {

	return;
}

HumanB::~HumanB( void ) {

	return;
}

std::string	HumanB::getName( void) const {

	return (this->_name);
}

void	HumanB::setName( std::string name) {

	this->_name = name;
	return;
}

Weapon*	HumanB::getWeaponPTR (void ) const {

	return (this->_weaponPTR);
}

void	HumanB::setWeaponPTR( Weapon* weaponPTR) {

	this->_weaponPTR = weaponPTR;
	return;
}

void	HumanB::attack( void) const {

	std::cout << this->_name << " attacks with their " << _weaponPTR << std::endl;
	return;
}

