
#include "HumanA.hpp"

//the HumanA object is directly initialized with the reference to the Weapon 
HumanA::HumanA(std::string name, Weapon &wp): weapon(wp)
{
    this->name = name;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}