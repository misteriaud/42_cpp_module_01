#include <iostream>
#include <string>
#include "colors.h"

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "memory address held by string : " << GREEN << &string << std::endl << RESET;
	std::cout << "memory address held by stringPTR : " << BLUE << &stringPTR << std::endl << RESET;
	std::cout << "memory address held by stringREF : " << YELLOW << &stringREF << std::endl << RESET;

	std::cout << std::endl;

	std::cout << "value of string : " << GREEN << string << std::endl << RESET;
	std::cout << "value pointed to by stringPTR : " << BLUE << *stringPTR << std::endl << RESET;
	std::cout << "value pointed to by stringREF : " << YELLOW << stringREF << std::endl << RESET;

}
