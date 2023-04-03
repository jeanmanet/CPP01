/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:43:49 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 10:30:19 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:

	std::string	_type;

public:

	Weapon(std::string type);
	~Weapon();
	std::string	getType() const;
	void		setType(std::string type);
};






#endif
