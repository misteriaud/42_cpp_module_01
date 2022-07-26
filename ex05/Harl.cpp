#include "Harl.hpp"
#include <iostream>
#include "colors.h"

Harl::Harl()
{
	_map[DEBUG].name = std::string(debug);
	_map[DEBUG].func = &Harl::_debug;

	_map[INFO].name = std::string(info);
	_map[INFO].func = &Harl::_info;

	_map[WARNING].name = std::string(warning);
	_map[WARNING].func = &Harl::_warning;

	_map[ERROR].name = std::string(error);
	_map[ERROR].func = &Harl::_error;
}

Harl::~Harl()
{
}

void	Harl::_debug(void)
{
	std::cout << "debug\n";
}

void	Harl::_info(void)
{
	std::cout << YELLOW << "info\n" << RESET;
}

void	Harl::_warning(void)
{
	std::cout << MAGENTA << "warning\n" << RESET;
}

void	Harl::_error(void)
{
	std::cout << RED << "error\n" << RESET;
}

void	Harl::complain(std::string level)
{
	size_t	i = 0;

	while (i < 4)
	{
		if (this->_map[i].name == level)
			(this->*(this->_map[i].func))();
		i++;
	}
}
