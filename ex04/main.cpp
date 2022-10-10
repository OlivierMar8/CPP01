//main.cpp	CPP01 / ex04

#include <iostream>
#include <fstream>

std::string	replace(std::string str, std::string s_str, std::string replace_str)
{
	std::string	newline;
	size_t		pos;
	size_t		start;

	
	start = 0;
	newline = "";
	pos = str.find(s_str);
	while (pos != std::string::npos)
	{
		newline += str.substr(start, pos - start);
		newline.append(replace_str);
		start = pos + s_str.size();
		pos = str.find(s_str, start);
	}
	newline.append(str.substr(start));
	return (newline);
}



int	main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Error with arguments !" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::ofstream	outFile;
	std::string res;
	std::ifstream	inFile;
	inFile.open(filename);
	if (inFile.is_open())
	{
		getline(inFile, res);
		if (!inFile.eof())
		{
			filename.append(".replace");
			std::ofstream	outFile;
			outFile.open(filename);
			if (outFile.is_open())
			{
				while (!inFile.eof())
				{
					res = replace(res, argv[2], argv[3]);			
					outFile <<  res <<  std::endl;
					getline(inFile, res);
				}
				outFile.close();
			}
			else
			std::cout << "Error opening file " << filename << std::endl;
		}
		inFile.close();
	}
	else
		std::cout << "Error opening file " << filename << std::endl;
	return 0;
}
