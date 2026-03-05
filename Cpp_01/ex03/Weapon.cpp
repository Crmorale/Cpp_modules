/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:05:16 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 21:01:58 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/***********************   CONSTRUCTOR AND DESTRUCTOR   ***********************/

Weapon::Weapon(std::string const &type) : _type(type) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

/***************************   PUBLIC FUNCTIONS   ****************************/

std::string const	&Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(std::string const &newType) {
	_type = newType;
}