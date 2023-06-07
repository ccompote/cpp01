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
		void setname(std::string name);

		//Destructor
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif