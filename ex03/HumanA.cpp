#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) : _name(name), _gun(gun)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack(void) const
{
	const std::string &guntype = _gun.getType();
	std::cout << _name << " attacks with their " << guntype << std::endl;
}