/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:59:27 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 10:48:23 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon&		_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();
};
