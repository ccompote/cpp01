#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string newName) : _name(newName)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << Zombie::_name << " was destroyed" << std::endl;
	return ;
}

void Zombie::announce(void) const
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
