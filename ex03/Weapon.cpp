#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::Weapon(void)
{
	return ;
}

const std::string& Weapon::getType(void) const
{
	const std::string &typeref = _type;
	return (typeref);
}

void Weapon::setType(std::string newtype)
{
	_type = newtype;
	return ;
}
