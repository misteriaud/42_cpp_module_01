#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
: _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << (_weapon ? _weapon->getType() : "unexisting weapon") << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
