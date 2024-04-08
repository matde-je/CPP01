

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::Zombie()
{
    return ;
}

// Destructor
Zombie::~Zombie()
{
    std::cout << name << " killed" << "\n";
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

void	Zombie::addName(std::string name)
{
	this->name = name;
}
