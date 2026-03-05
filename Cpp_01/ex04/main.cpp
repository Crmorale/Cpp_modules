/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:10 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/26 16:22:20 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static	std::string	replaceAll(std::string content, const std::string &s1,
	const std::string &s2) {
		size_t	pos = 0;
		while ((pos = content.find(s1, pos)) != std::string::npos) {
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos += s2.length();
		}
		return (content);
	}

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1); 
	}
	
	std::ifstream input;
	input.open(filename.c_str(), std::ios::in);
	if(!input.is_open()) {
		std::cerr << "Error: coul not open input file." << std::endl;
		return (1);
	}

	std::string	content;
	std::string	line;
	
	while (std::getline(input, line)) {
		content += line;
		if (!input.eof())
			content += '\n';
	}
	input.close();
	content = replaceAll(content, s1, s2);
	
	std::ofstream	output;
	
	output.open((filename + ".replace").c_str(), std::ios::out);
	if (!output.is_open()) {
		std::cerr << "Error: could not open output file." << std::endl;
		return (1);
	}
	output << content;
	output.close();
	return (0);
}



	