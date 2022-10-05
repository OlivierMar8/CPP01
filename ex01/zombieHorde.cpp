//zombieHorde.cpp	CPP01 / ex01

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie* liste = new Zombie[N];

	for (int i = 0; i < N; i++)
		liste[i].setName(name);

	return (liste);
}

