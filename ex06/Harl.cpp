/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:49:28 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/28 11:56:28 by gyong-si         ###   ########.fr       */
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
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
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
				(this->*functions[0])();
				 __attribute__ ((fallthrough));
		case 1:
				(this->*functions[1])();
				 __attribute__ ((fallthrough));
		case 2:
				(this->*functions[2])();
				 __attribute__ ((fallthrough));
		case 3:
				(this->*functions[3])();
				break;
		default:
			std::cout << "No Valid Level.\n" << std::endl;
			break;
	}
}
