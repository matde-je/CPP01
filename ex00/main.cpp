
#include "Zombie.hpp"

int main()
{
    Zombie  *zombie = newZombie("Heap zombie");
    zombie->announce();
    randomChump("Stack zombie");
    delete (zombie);
    return 0;
}