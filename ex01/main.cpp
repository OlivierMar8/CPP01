//main.cpp	CPP01 / ex01

#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main( void )
{
	int		N;
	Zombie*	horde;

	N = 10;
	horde = zombieHorde(10, "le_zombie");
	horde[0].announce();

	std::cout << "Affichage de toute la horde" << std::endl;
	for (int i =0; i < N; i++)
		horde[i].announce();

	delete [] horde;

	return (1);
}
