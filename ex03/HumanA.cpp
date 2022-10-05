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

Weapon&	HumanA::getWeaponREF( void ) const {

	return (this->_weaponREF);
}

void	HumanA::setWeaponREF ( Weapon& weaponREF) {

	this->_weaponREF = weaponREF;
	return;
}

void	HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with their " << std::endl;
	//std::cout << this->_name << " attacks with their " << HumanA::getWeaponREF() << std::endl;
	return;
}

