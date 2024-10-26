/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:50:20 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/26 22:52:08 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	open_file(std::fstream &fileStream, std::string file, std::string file_permission)
{
	if (file_permission == "r")
		fileStream.open(file.c_str(), std::fstream::in);
	else if (file_permission == "w") {
		fileStream.open(file.c_str(), std::fstream::out | std::fstream::trunc);
	} else {
		std::cerr << "Invalid file permission!" << std::endl;
		return (1);
	}
	if (!fileStream.is_open()) {
		std::cerr << "Error opening file!" << std::endl;
		return (1);
	}
	return (0);
}

int	replace(std::string s1, std::string s2, std::fstream *inputFile, std::fstream *outputFile)
{
	std::string line;
	size_t		pos;
	bool		found = false;

	while(std::getline(*inputFile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
			found = true;
		}
		*outputFile << line << std::endl;
	}
	if (!found) {
		std::cerr << "Error: " << s1 << "was not found in the file provided." << std::endl;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::string		inputFile;
	std::string		outputFile;
	std::fstream	inputStream;
	std::fstream	outputStream;
	std::string		s1;
	std::string		s2;

	if (ac != 4)
		return (std::cout << "Usage: a.out filename s1 s2 " << std::endl, 0);
	inputFile = av[1];
	s1 = av[2];
	s2 = av[3];
	outputFile = inputFile + ".replace";
	if (open_file(inputStream, inputFile, "r") != 0)
		return (1);
	if (open_file(outputStream, outputFile, "w") != 0) {
		inputStream.close();
		return (1);
	}
	if (replace(s1, s2, &inputStream, &outputStream) != 0) {
		inputStream.close();
		outputStream.close();
		return 1;
	}
	inputStream.close();
	outputStream.close();
	return (0);
}
