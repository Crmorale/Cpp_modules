/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:13:34 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 20:37:45 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/***********************   CONSTRUCTORS AND DESTRUCTOR    *********************/

Zombie::Zombie(void) {
	std::cout << "A new zombie has appeared" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie named " << _name << " has been destroyed." << std::endl;
	return ;
}


/*********************************   GETTER    ********************************/

std::string Zombie::_getName(void) const {
	return (this->_name);
}


/*********************************   SETTER    ********************************/

void	Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}


/******************************* PUBLIC FUNCTION ******************************/
void	Zombie::announce(void) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}



