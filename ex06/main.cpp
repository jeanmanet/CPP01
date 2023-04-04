/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:33:01 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/04 14:33:05 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char** argv) {
	Harl		chatbot;
	int			level_mini = 4;
	std::string	level_list[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}


	for (int i = 0; i < 4; i++){
		if (!level_list[i].compare(argv[1])) {
			level_mini = i;
			break;
		}
	}

	switch (level_mini)
	{
	case 0 :
		chatbot.complain("debug");
	case 1 :
		chatbot.complain("info");
	case 2 :
		chatbot.complain("warning");
	case 3 :
		chatbot.complain("error");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}
