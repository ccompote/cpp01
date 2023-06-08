#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		typedef void (Harl::*MemberFunction)(); //return value + in () the parameters the function takes
		struct LogLevel
		{
			std::string level;
			MemberFunction function;
		};

		LogLevel logLevels[4];

	public:
		Harl();
		~Harl();

		void complain(std::string level);
};

#endif