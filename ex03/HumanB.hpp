/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:59:47 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 10:56:09 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon&	weapon);
	void	attack();
};
