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
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::_info(void)
{
	std::cout << YELLOW << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << RESET;
}

void	Harl::_warning(void)
{
	std::cout << MAGENTA << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << RESET;
}

void	Harl::_error(void)
{
	std::cout << RED << "[ERROR] This is unacceptable! I want to speak to the manager now.\n" << RESET;
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
