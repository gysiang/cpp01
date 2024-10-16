/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:42:52 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/16 13:58:55 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon 		*weapon;

	public:
		HumanB(const std::string &name);
		~HumanB(void);
		void	attack() const;
		void	setWeapon(Weapon *weapon);
};

#endif
