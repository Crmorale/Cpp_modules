/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:48:09 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/04 11:44:12 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

/**********************   CONSTRUCTOR AND DESTRUCTOR  *************************/

Harl::Harl() {
	return ;
}

Harl::~Harl() {
	return ;
}

/***************************   PUBLIC FUNCTIONS  ******************************/

void	Harl::debug(void) {
	std::cout << "(DEBUG)" << std::endl
		<<	"I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "(INFO)" << std::endl 
		<<	"I cannot believe adding extra bacon costs more money. You "
		"didn't put enough bacon in my burger! If you did, I wouldn't be asking "
		"for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "(WARNING)" << std::endl
		<<	"I think I deserve to have some extra bacon for free. I've "
		"been coming for years, whereas you started working here just last "
		"month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "(ERROR)" << std::endl
		<<	"This is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}


/***************************   PUBLIC FUNCTIONS  ******************************/

void	Harl::complain(std::string level) {
	void	(Harl::*functions [4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return ;
		}
	}
}