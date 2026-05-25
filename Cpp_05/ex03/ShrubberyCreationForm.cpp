/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:15:09 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 23:52:01 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

//Creates the base part with AForm constructor and the derived part with its attribute.
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137),
	_target(target) {
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other),
	_target(other._target){
	std::cout << "ShruberryCreationForm copy constructor called." << std::endl;
	}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		AForm::operator=(other);
		_target  = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

void ShrubberyCreationForm::executeAction() const {
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file) {
		std::cerr << "Error: could not open output file for shrubbery" << std::endl;
		return;
	}
	file << "      _--_\n";
	file << "       /\\\n";
	file << "      /  \\\n";
	file << "     /    \\\n";
	file << "    /\\    /\\\n";
	file << "   /  \\  /  \\\n";
	file << "      ||||\n";
	file << "      ||||\n";
	file << "      ||||\n";
	file.close();
}
