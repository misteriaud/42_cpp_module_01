#pragma once
#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon = NULL;
public:
	HumanB(const std::string&);
	~HumanB();

	void		attack(void);
	void		setWeapon(Weapon&);
};

#endif
