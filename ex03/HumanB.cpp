
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    return;
}

//Passing by value creates a copy, (encapsulation and immutability)
void HumanB::setWeapon(Weapon &wp)
{
    this->weapon = &wp;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}