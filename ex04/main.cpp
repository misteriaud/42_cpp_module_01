#include <iostream>
#include <fstream>

std::string readFileIntoString(const std::string& path) {
    std::ifstream input_file(path);
    if (!input_file.is_open()) {
        std::cerr << "Could not open the file - '"
             << path << "'" << std::endl;
			 return (NULL);
    }
	while (input_file.getline())
    return std::string(input_file., input_file.end());
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Nombre d'arguments invalides\n";
		return (1);
	}
	const std::string path = av[1];
	const std::string str1 = av[2];
	const std::string str2 = av[3];


	return (0);
}
