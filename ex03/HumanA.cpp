/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:12:17 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 10:59:13 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
: _weapon(weapon), _name(name) {
	//std::cout << "Un Humain A nommee " << name << " a ete cree avec une arme : " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	//std::cout << this->_name << " a quitte ce monde !" << std::endl;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
