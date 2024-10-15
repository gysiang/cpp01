/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:21:50 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/15 17:43:47 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		n;
	int		i;

	n = 3;
	i = 0;
	horde = zombieHorde(n, "Horde");
	while (n > i)
	{
		std::cout << "Index " << i << ": "; horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
