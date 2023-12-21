

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie = zombieHorde(2, "lele");
    zombie->announce();
    zombie->announce();
    delete [] zombie;
    return 0;
}