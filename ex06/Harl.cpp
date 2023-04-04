/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:27:58 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/04 12:15:16 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) const {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::info( void ) const {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning( void ) const {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void ) const {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) const {
		std::string	level_list[] = {
			"debug",
			"info",
			"warning",
			"error"
		};
		void	(Harl::*function_list[])() const = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};

		(void)function_list;
		for (int i = 0; i < 4; i++)
		{
			if (level_list[i] == level) {
				(this->*function_list[i])();
				return;
			}
		}
		std::cout << "Invalid function call for complain : " << level << std::endl;
}
