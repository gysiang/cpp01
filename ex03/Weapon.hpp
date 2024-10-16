/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:43:01 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/16 12:50:52 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(const std::string &type);
		~Weapon();
		std::string getType();
		void	setType(const std::string &type);
};

#endif