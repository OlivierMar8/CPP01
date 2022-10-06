//HumanA.cpp	CPP01 / ex03

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weaponREF ) : _name(name), _weaponREF(weaponREF) {

	return;
}

HumanA::~HumanA( void ) {

	return;
}

std::string	HumanA::getName( void ) const {

	return (this->_name);
}

void	HumanA::setName( std::string name ) {

	this->_name = name;
	return;
}

Weapon&	HumanA::getWeapon( void ) const {

	return (this->_weaponREF);
}

void	HumanA::setWeapon( Weapon& weaponREF) {

	this->_weaponREF = weaponREF;
	return;
}

void	HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with their " << _weaponREF.getType() << std::endl;
	return;
}

