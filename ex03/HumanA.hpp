/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:42:47 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/16 14:15:17 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon 		&weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {};
		~HumanA();
		void	attack() const;
};

#endif
