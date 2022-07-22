#pragma once
#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;
public:
	HumanB(const std::string&);
	~HumanB();

	void		attack(void);
	void		setWeapon(const Weapon&);
};

#endif
