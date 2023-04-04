/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:17:46 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/04 09:09:49 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char** argv) {


	if (argc != 4){
		std::cout << "Incorrect number of arguments !" << std::endl;
		std::cout << " There must be 3 args, <filename> <string1> <string2>" << std::endl;
		exit(0);
	}
	std::ifstream	original;
	std::ofstream	copy;
	std::string		file = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		line;

	original.open(file);
	copy.open(file + ".replace");
	if (original.is_open())	{
		while (getline(original, line))
		{
			if (s1.length() > 0) {
				size_t pos = 0;
				while ((pos = line.find(s1, pos)) != std::string::npos) {
					std::string prefix = line.substr(0, pos);
					std::string suffix = line.substr(pos + s1.length());
					line = prefix + s2 + suffix;
					pos += s2.length();
				}
			}
            copy << line << std::endl;
		}
	}
	original.close();
	copy.close();
}
