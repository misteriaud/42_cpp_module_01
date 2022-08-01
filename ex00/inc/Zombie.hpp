/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:24:44 by mriaud            #+#    #+#             */
/*   Updated: 2022/08/01 16:01:38 by mriaud           ###   ########.fr       */
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

private:
	std::string	_name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
