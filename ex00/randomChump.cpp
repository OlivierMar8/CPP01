//randomChump.cpp	CPP01 / ex00

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie chump(name);
	chump.announce();
	return;
}

