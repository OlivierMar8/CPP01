//main.cpp	CPP01 / ex02

#include <iostream>
#include "Weapon.hpp"

int	main( void )
{
	Weapon inst("first");

	std::cout << inst.getType() << std::endl;
	return (0);
}
