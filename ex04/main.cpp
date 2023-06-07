#include <fstream>

int handle_file(int argc, char **argv)
{
	std::ifstream infile(argv[1]);
	if (infile.is_open)
	{

	}
	else
		return (0);
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!handle_file(argc, argv))
			return (1);
	}
	else
		return (1);
	return (0);
}