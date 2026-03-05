/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:05:09 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 19:56:14 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

/***********************   CONSTRUCTOR AND DESTRUCTOR   +**********************/

HumanB::HumanB(std::string const &name) : _name(name), _weapon(NULL){
	return ;
}

HumanB::~HumanB() {
	return ;	
}

/***************************   PUBLIC FUNCTIONS   ****************************/

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}


/***************************   PUBLIC FUNCTIONS   ****************************/
void	HumanB::attack(void) const {
	std::cout << _name << " attacks with their ";
	if (_weapon != NULL && _weapon->getType() != "")
		std::cout << _weapon->getType() << std::endl;
	else
	std::cout << "fists" << std::endl;
	return ;
}