
#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) {
    this->name = name;
}

// Destructor
Zombie::~Zombie() {
    std::cout << name << " killed" << "\n";
}

void    Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << "\n";
}