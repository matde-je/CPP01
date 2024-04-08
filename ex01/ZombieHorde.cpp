
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie		*zombie = new Zombie[N];
    int i = -1;
    while (++i < N)
		  zombie[i].addName(name);
    return zombie;
}