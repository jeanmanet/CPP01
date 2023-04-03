/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:41:02 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/03 09:43:40 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

std::string	to_str(int number) {
    std::ostringstream ss;
    ss << number;
    return ss.str();
}

Zombie* zombieHorde( int N, std::string name ) {
	int			i = 0;
	Zombie*		zombies = new Zombie[N];
	std::string	current_name;

	while (i < N)
	{
		current_name = name + to_str(i + 1);
		zombies[i].setName(current_name);
		std::cout << "Un zombie a ete baptise " << current_name << std::endl;
		i++;
	}
	return (zombies);
}

void	hordeAnnounce(int N, Zombie* horde) {
	for (int i = 0; i < N; i++)
		horde++->announce();
}
