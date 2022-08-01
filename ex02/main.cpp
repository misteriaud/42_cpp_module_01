#include <iostream>
#include <string>
#include "colors.h"

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << BOLDWHITE << "Adresse des differentes variables:\n" << RESET;
	std::cout << "string : " << GREEN << &string << std::endl << RESET;
	std::cout << "stringPTR : " << BLUE << &stringPTR << std::endl << RESET;
	std::cout << "stringREF : " << YELLOW << &stringREF << std::endl << RESET;

	std::cout << std::endl;

	std::cout << BOLDWHITE << "Valeur des differentes variables:\n" << RESET;
	std::cout << "string : " << GREEN << string << std::endl << RESET;
	std::cout << "*stringPTR : " << BLUE << *stringPTR << std::endl << RESET;
	std::cout << "stringREF : " << YELLOW << stringREF << std::endl << RESET;

}
