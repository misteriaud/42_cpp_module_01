#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->Weapon.getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	this->weapon = &weapon;
}
