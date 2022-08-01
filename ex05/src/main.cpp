#include "Harl.hpp"
#include "colors.h"
#include <iostream>

int main(void)
{
	Harl logger;

	std::cout << BOLDWHITE << "Calling complain with \"fwfwe\"\n" << RESET;
	logger.complain(std::string("fwfwe"));

	std::cout << BOLDWHITE << "\nCalling complain with \"error\"\n" << RESET;
	logger.complain("error");

	std::cout << BOLDWHITE << "\nCalling complain with \"warning\"\n" << RESET;
	logger.complain("warning");

	std::cout << BOLDWHITE << "\nCalling complain with \"info\"\n" << RESET;
	logger.complain("info");

	std::cout << BOLDWHITE << "\nCalling complain with \"debug\"\n" << RESET;
	logger.complain("debug");

	return (0);
}
