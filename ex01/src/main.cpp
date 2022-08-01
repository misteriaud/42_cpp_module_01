/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:29:14 by mriaud            #+#    #+#             */
/*   Updated: 2022/08/01 16:22:13 by mriaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "colors.h"
#include <iostream>

#define ZOMBIE_NUMBER 10

int	main(void)
{
	std::cout << BOLDWHITE << "Appel de zombieHorde()\n" << RESET;
	Zombie *bunchOfZombie = zombieHorde(ZOMBIE_NUMBER, "Social Zombie");
	for (size_t i = 0; i < ZOMBIE_NUMBER; i++)
		bunchOfZombie[i].announce();

	delete[] bunchOfZombie;
}
