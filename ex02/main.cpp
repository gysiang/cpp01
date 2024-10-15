/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:45:53 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/15 23:56:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	// pointer to string
	std::string *stringPTR = &brain;
	// reference to string
	std::string	&stringREF = brain;

	std::cout << "Memory address of string variable: " << &brain << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address accessed by stringREF: " << &stringREF << std::endl;
	std::cout << "Value of string variable: " << brain << std::endl;
	std::cout << "Value of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
