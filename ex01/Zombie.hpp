/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:24:44 by mriaud            #+#    #+#             */
/*   Updated: 2022/07/20 12:00:40 by mriaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {

public:
	Zombie(void);
	Zombie(std::string);
	~Zombie(void);

	void announce(void);
	void setName(std::string);
private:

	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
