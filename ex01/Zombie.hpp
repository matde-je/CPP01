
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <vector>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();

    void announce(void);
    void	addName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
