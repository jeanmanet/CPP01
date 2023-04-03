/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:04 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 10:58:40 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name) {
	//std::cout << "Un Humain A nommee " << name << " a ete cree sans arme" << std::endl;
}

HumanB::~HumanB() {
	//std::cout << this->_name << " a quitte ce monde !" << std::endl;
}

void	HumanB::setWeapon(Weapon&	weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

