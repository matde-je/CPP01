
#include "HumanA.hpp"

//the HumanA object is directly initialized with the reference to the Weapon 
HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack(void)
{
    int i = 0;
    std::cout << this->name << " attacks with his " << this->weapon.getType()[0];
    while (this->weapon.getType()[++i])
        std::cout << this->weapon.getType()[i];
    std::cout << std::endl;
}