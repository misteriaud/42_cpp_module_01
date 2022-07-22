#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
: _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << (this->_weapon ? this->_weapon->getType() : "unexisting weapon") << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
