//main.cpp	CPP01 / ex00

#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main( void )
{
	Zombie	zozo;

	zozo.announce();
	Zombie	rere("rererere");

	rere.announce();

	Zombie* toto = newZombie("loto");
	toto->announce();

	randomChump("zomb_local");

	delete toto;

	return (1);
}
