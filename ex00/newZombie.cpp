#include "Zombie.hpp"

//new: heap
Zombie* newZombie(std::string name)
{
    Zombie  *zombie = new Zombie(name);
    return zombie;
}