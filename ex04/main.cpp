
#include <iostream>
#include <fstream>
#include <string>

//str in original file
int	replace(char **argv, std::string str)
{
	std::ofstream	outfile;
	int				pos;
	
	outfile.open((std::string(argv[1]) + ".replace").c_str()); // return const pointer
	if (outfile.fail())
	{
		std::cout << "Unvalid new file" << std::endl;
		return (1);
	}
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i); //starts from i, returns the index, trying to find the index in which it is equal do s1
		if (pos == i)
		{
			outfile << argv[3]; //write  s2 in new file
			i += std::string(argv[2]).size() - 1; //move further to analyse a new word from original file
		}
		else
			outfile << str[i]; // else write original word
	}
	outfile.close();
	return (0);
}

//initially empty string
//c has each char read one by one
//infile, reading data from a file
int main(int argc, char **argv)
{
    if (argc != 4)
	{
		std::cout << "Unvalid arguments" << std::endl;
        return (1);
	}
    std::string str;
    std::ifstream	infile;
    char c;

    infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Unvalid filename" << std::endl;
		return (1);
	}
    while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;
    infile.close();
    return (replace(argv, str));
}