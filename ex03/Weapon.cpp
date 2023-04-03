/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:44:45 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 10:58:23 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	//std::cout << "Une arme : " << type << " a ete fabriquee !" << std::endl;
}

Weapon::~Weapon() {
	//std::cout << "L'arme : " << this->_type << " a ete detruite !" << std::endl;
}

std::string Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
