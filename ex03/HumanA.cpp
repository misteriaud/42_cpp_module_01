#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
