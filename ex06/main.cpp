//main.cpp	CPP01 / ex06

#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 1;

	Harl	toto;
	
	toto.complain(argv[1]);

	return 0;

}
