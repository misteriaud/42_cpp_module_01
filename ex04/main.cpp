#include <iostream>
#include <fstream>

std::string replace(const std::string& src, const std::string& from, const std::string& to)
{
	std::string		dest;
	size_t			last_index = 0;
	size_t			index;

	while (index = src.find(from) != std::string::npos)
	{
		dest << src.substr(last_index, index);
		dest << str2;
		dest << tampon.substr(found + str1.length(), tampon.npos) << std::endl;
	}
	return (dest);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Nombre d'arguments invalides\n";
		return (1);
	}
    std::ifstream		input_file(av[1]);
	const std::string	str1 = av[2];
	const std::string	str2 = av[3];
	std::string			tampon;

	if (!input_file.is_open())
	{
		std::cerr << "Could not open the file " << av[1] << std::endl;
		return (1);
	}
	while (std::getline(input_file, tampon))
	{
		std::cout << replace(tampon, str1, str2) << std::endl;
	}

	return (0);
}
