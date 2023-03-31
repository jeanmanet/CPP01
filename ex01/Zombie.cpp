/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:59:43 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 20:28:12 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Un zombie est venu au monde !" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << "Le zombie " << this->_name << " a quitte ce monde cruel !" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << " :  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

std::string	Zombie::getName() {
	return (this->_name);
}
