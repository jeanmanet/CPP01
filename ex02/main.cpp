/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:51:19 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 21:04:17 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	 stringPTR = &string;
	std::string&	stringREF = string;


	std::cout << "L’adresse de la string en mémoire est : " << &string << std::endl;
	std::cout << "L’adresse stockée dans stringPTR est : " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF est : " << &stringREF << std::endl;

	std::cout << "La valeur de la string est : " << string << std::endl;
	std::cout << "La valeur pointée par stringPTR est : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est : " << stringREF << std::endl;

	return (0);
}
