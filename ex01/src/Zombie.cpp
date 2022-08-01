/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:24:41 by mriaud            #+#    #+#             */
/*   Updated: 2022/08/01 16:21:04 by mriaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include "colors.h"

Zombie::Zombie(void) {
	std::cout << GREEN << "Default constructor called" << std::endl << RESET;
}

Zombie::Zombie(std::string name): _name(name) {
	std::cout << GREEN << "Constructor called" << std::endl << RESET;
}

Zombie::~Zombie(void) {
	std::cout << RED << this->_name << " died in a memory cleaning accident :'(\n" << RESET;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
