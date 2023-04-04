/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:14:35 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/04 11:33:59 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

class Harl
{
private:

	void debug( void ) const;
	void info( void ) const;
	void warning( void ) const;
	void error( void ) const;

public:
	Harl(/* args */);
	~Harl();
	void complain(std::string level) const;
};

#endif
