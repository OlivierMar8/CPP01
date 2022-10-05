//newZombie.cpp	CPP01 / ex00

#include <string>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie*	z = new Zombie(name);
	return (z);

}

