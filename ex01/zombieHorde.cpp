/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:25:39 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/15 18:18:08 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;
	Zombie *horde;

	i = 0;
	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	while (N > i)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
