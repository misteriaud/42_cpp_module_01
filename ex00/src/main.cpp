/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:29:14 by mriaud            #+#    #+#             */
/*   Updated: 2022/08/01 16:12:52 by mriaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "colors.h"
#include <iostream>

int	main(void)
{
	std::cout << BOLDWHITE << "Instantiation d'un objet Zombie dans la stack\n" << RESET;
	Zombie zombie1("StackZombie");

	zombie1.announce();

	std::cout << BOLDWHITE << "\nInstantiation d'un objet Zombie dans la heap\n" << RESET;
	Zombie *zombie2 = newZombie("HeapZombie");

	zombie2->announce();

	std::cout << BOLDWHITE << "\nLe HeapZombie a besoin d'etre detruit pour liberer la heap\n" << RESET;
	delete zombie2;

	std::cout << BOLDWHITE << "\nAppel de randomChump\n" << RESET;
	randomChump("RandomZombie");
	return (0);
}
