#include "Zombie.hpp"

int main(void)
{
	Zombie zo_one("Zopa");
	Zombie zo_two("I");

	zo_one.announce();
	zo_two.announce();

	randomChump("Vova");
	Zombie *neZop = newZombie("Miss");
	neZop->announce();
	delete(neZop);
	return (0);
}