/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:47:38 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/15 13:53:10 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zb1;

	// create a zombie using heap
	zb1 = new Zombie("Hernado");
	zb1->announce();
	delete zb1;

	// create a zombie using stack
	randomChump("Stefan");
	return (0);
}
