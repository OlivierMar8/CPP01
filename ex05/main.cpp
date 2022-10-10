//main.cpp	CPP01 / ex05

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl	toto;
	toto.complain("DEBUG");
	toto.complain("ERROR");
	toto.complain("WARNING");
	toto.complain("INFO");
	toto.complain("DEBUG");
	toto.complain("WARNING");
	toto.complain("ERROR");
	toto.complain("INFO");

	return 0;

}
