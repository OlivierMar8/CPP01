//main.cpp	CPP01 / ex04

#include <iostream>
#include <fstream>

std::string	replace(std::string str)
{
	return (str);
}



int	main(int argc, char **argv)
{
	std::string filename;
	std::string res;
	if (argc != 4)
	{
		std::cout << "Error with arguments !" << std::endl;
		return (1);
	}
	std::ifstream	inFile(argv[1]);
	filename = argv[1];
	filename.append(".replace");
	std::ofstream	outFile("replaceFile");


	inFile >> res;
		std::cout << res << std::endl;

	inFile.close();
	outFile.close();
	return 0;
}
