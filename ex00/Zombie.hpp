#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:

		//Constructor
		Zombie();
		Zombie(std::string);

		void announce(void) const;

		//Destructor
		~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif