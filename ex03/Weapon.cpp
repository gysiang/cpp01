/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:42:59 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/16 12:40:04 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {};

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {};

std::string Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}