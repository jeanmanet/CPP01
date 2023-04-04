/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:33:01 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/04 11:32:39 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	chatbot;

	chatbot.complain("debug");
	chatbot.complain("test");
	chatbot.complain("error");
	chatbot.complain("warning");
	chatbot.complain("info");

	return (0);
}
