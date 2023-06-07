#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:

	//Constructor
		Weapon(std::string);
		Weapon();

		const std::string& getType() const;
		void setType(std::string newtype);
};

#endif