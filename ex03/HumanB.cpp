#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _gun()
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack(void) const
{
	if (_gun)
	{
		const std::string &guntype = _gun->getType();
		std::cout << _name << " attacks with their " << guntype << std::endl;
	}
	else
		std::cout << _name << " attacks with nothing" << std::endl;
		
}

void HumanB::setWeapon(Weapon &gun)
{
	_gun = &gun;
}