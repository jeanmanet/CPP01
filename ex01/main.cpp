/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:53:08 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 20:44:05 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

void	hordeAnnounce(int N, Zombie* horde);


int	main(void) {
	Zombie*	horde;
	std::string	name;
	int			N;

	name = "Francis";
	N = 42;
	horde = zombieHorde(N, name);

	hordeAnnounce(N, horde);
	delete [] horde;
	return (0);
}
