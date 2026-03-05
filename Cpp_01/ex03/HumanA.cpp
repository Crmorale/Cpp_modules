/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:05:06 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 18:21:40 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

/***********************   CONSTRUCTOR AND DESTRUCTOR   +**********************/

HumanA::HumanA(std::string const &name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA() {
	return ;	
}


/***************************   PUBLIC FUNCTIONS   ****************************/
void	HumanA::attack(void) const {
	std::cout << _name << " attacks with their ";
	if (_weapon.getType() == "")
		std::cout << "bare hands." << std::endl;
	else
	std::cout << _weapon.getType() << std::endl;
	return ;
}
