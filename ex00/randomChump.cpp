/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:54 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/15 13:59:24 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This is stack allocation. This zombie will auto delete
// after the function ends.

void	randomChump(std::string name)
{
	Zombie stack(name);
	stack.announce();
}
