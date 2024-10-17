/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:33:48 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/17 16:25:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl Ivan;

	Ivan.complain("DEBUG");
	Ivan.complain("INFO");
	Ivan.complain("WARNING");
	Ivan.complain("ERROR");
	Ivan.complain("I WANT TO SPEAK TO YOUR MANAGER!");
	return (0);
}
