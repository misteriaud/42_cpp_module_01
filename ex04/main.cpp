#include <iostream>
#include <fstream>

std::string replace(const std::string& src, const std::string& from, const std::string& to)
{
	std::string		dest;
	size_t			last_index = 0;
	size_t			index;

	while (index = src.find(from, last_index), index != std::string::npos)
	{
		dest += src.substr(last_index, index - last_index);
		dest += to;
		last_index = index + from.length();
	}
	dest += src.substr(last_index, src.length() - last_index);
	return (dest);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments\n";
		return (1);
	}
	if (!av[2][0])
	{
		std::cerr << "The string pattern must not be empty" << std::endl;
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
	const std::string	output_file_name = std::string(av[1]) + std::string(".replace");
    std::ofstream		output_file(output_file_name.c_str());
	if (!output_file.is_open())
	{
		std::cerr << "Could not create the output file " << av[1] << ".replace" << std::endl;
		return (1);
	}
	while (std::getline(input_file, tampon))
		output_file << replace(tampon, str1, str2) << std::endl;

	return (0);
}
