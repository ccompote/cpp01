#include "Harl.hpp"

Harl::Harl()
{
	logLevels[0].level = "debug";
	logLevels[0].function = &Harl::debug;
	logLevels[1].level = "info";
	logLevels[1].function = &Harl::info;
	logLevels[2].level = "warning";
	logLevels[2].function = &Harl::warning;
	logLevels[3].level = "error";
	logLevels[3].function = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain( std::string level)
{
	 for (int i = 0; i < 4; ++i) {
            if (level == logLevels[i].level) {
                (this->*(logLevels[i].function))(); //->* is to call a func from a pointer. e.g. in main: (obj.*funcPtr)();
                return;
            }
        }
	std::cout << "Invalid level: " << level << std::endl;
}