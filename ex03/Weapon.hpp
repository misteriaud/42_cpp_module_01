#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(const std::string&);
	~Weapon();

	const std::string&	getType(void);
	void				setType(const std::string&);
};

#endif
