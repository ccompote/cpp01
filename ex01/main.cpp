#include "Zombie.hpp"


int main(void)
{
	Zombie *new_horde = zombieHorde(5, "zopa");

	for (int i = 0; i < 5; ++i)
		new_horde[i].announce();
	delete [] new_horde;
	return (0);
}