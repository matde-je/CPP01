
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
void HumanB::setWeapon(Weapon &pb)
{
    this->weapon = &pb;
}

void HumanB::attack(void)
{
    int i = 0;
    std::cout << this->name << " attacks with his " << this->weapon->getType()[0];
    while (this->weapon->getType()[++i])
        std::cout << this->weapon->getType()[i];
    std::cout << std::endl;
}