/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:29:14 by mriaud            #+#    #+#             */
/*   Updated: 2022/07/20 12:07:25 by mriaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	size_t n = 10;

	(void)ac;
	(void)av;
	Zombie *bunchOfZombie = zombieHorde(n, "test");
	for (size_t i = 0; i < n; i++)
		bunchOfZombie[i].announce();

	delete[] bunchOfZombie;
}
