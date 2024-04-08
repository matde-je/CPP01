

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie = zombieHorde(2, "zumbee");
    zombie->announce();
    zombie[1].announce();
    delete [] zombie;
    return 0;
}