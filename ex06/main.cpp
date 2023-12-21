
#include "Karen.hpp"

int main(int argc, char **argv)
{
    int k;
    if (argc != 2)
    {
        std::cout << "Invalid number of args\n";
        return 0;
    }
    if (std::strcmp(argv[1], "DEBUG") == 0)
        k = 1;
    else if (std::strcmp(argv[1], "INFO") == 0)
        k = 2;
    else if (std::strcmp(argv[1], "WARNING") == 0)
        k = 3;
    else if (std::strcmp(argv[1], "ERROR") == 0)
        k = 4;
    switch(k) {
        case 1:
            std::cout << "[ DEBUG ]" << std::endl;
            std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
            std::cout << "\n[ INFO ]" << std::endl;
            std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl; 
            break ;
        case 2:
            std::cout << "[ INFO ]" << std::endl;
            std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl; 
            std::cout << "\n[ WARNING ]" << std::endl;
            std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
            break ;
        case 3:
            std::cout << "[ WARNING ]" << std::endl;
            std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming here for years and you just started working here last month." << std::endl;
            std::cout << "\n[ ERROR ]" << std::endl;
            std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
            break ;
        case 4:
            std::cout << "[ ERROR ]" << std::endl;
            std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break ;
    }
    return 0;
}