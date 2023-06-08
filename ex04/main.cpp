#include <fstream>
#include <iostream>
#include <string>

int handle_file(char **argv)
{
	std::ifstream infile(argv[1]);
	if (infile)
	{
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string name = std::string(argv[1]) + ".replace";
		std::ofstream newfile(name.c_str()); // C++98, the std::ofstream constructor expects a C-style string (const char*) as the filename argument, convert using the c_str() 

		if (newfile)
		{
			std::string line;
			while (std::getline(infile, line))
			{
				size_t pos = line.find(s1);
				while (pos != line.npos)
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					pos = line.find(s1, pos + s2.length());
				}
				newfile << line << std::endl;
		
			}
			infile.close();
			newfile.close();
		}
		else
		{
			std::cout << "Error with outfile" << std::endl;
			return (0);
		}
	}
	else
	{
		std::cout << "Error with infile" << std::endl;
		return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{

	if (argc == 4)
	{
		if (!handle_file(argv))
			return (1);
	}
	else
	{
		std::cout << "Wrong parameters" << std::endl;
		return (1);
	}
	return (0);
}