/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:49:28 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/17 17:10:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	"pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t "
	"be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
	" coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				Harl::debug();
				std::cout << "\n";
				std::cout << "[ INFO ]" << std::endl;
				Harl::info();
				std::cout << "\n";
				std::cout << "[ WARNING ]" << std::endl;
				Harl::warning();
				std::cout << "\n";
				std::cout << "[ ERROR ]" << std::endl;
				Harl::error();
				break;
		case 1:
				std::cout << "[ INFO ]" << std::endl;
				Harl::info();
				std::cout << "\n";
				std::cout << "[ WARNING ]" << std::endl;
				Harl::warning();
				std::cout << "\n";
				std::cout << "[ ERROR ]" << std::endl;
				Harl::error();
				break;
		case 2:
				std::cout << "[ WARNING ]" << std::endl;
				Harl::warning();
				std::cout << "\n";
				std::cout << "[ ERROR ]" << std::endl;
				Harl::error();
				break;
		case 3:
				std::cout << "[ ERROR ]" << std::endl;
				Harl::error();
				break;
		default:
			std::cout << "No Valid Level.\n" << std::endl;
			break;
	}
}
