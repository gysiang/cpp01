/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:51:05 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/17 16:55:27 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Ivan;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	Ivan.complain(av[1]);
	return (0);
}
