#pragma once
#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(const std::string&, Weapon&);
	~HumanA();

	void		attack(void);
};

#endif
