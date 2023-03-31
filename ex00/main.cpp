/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:53:08 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 18:33:47 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void) {
	Zombie*	zombie = newZombie("Marvin");

	zombie->announce();
	randomChump("Edgar");
	delete zombie;
	return (0);
}
