/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:46:09 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/09 14:31:07 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>


/******************************    CANONICAL FORM   *******************************/

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	 _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	return ;	
}

	
ScavTrap::ScavTrap(const ScavTrap &other)  : ClapTrap(other){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name 		= other._name;
		this->_hitPoints 	= other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}


/****************************    PUBLIC FUNCTIONS   ***************************/

void	ScavTrap::attack(const std::string &target) {
	if (this->_hitPoints > 0 && this-> _energyPoints > 0) {
		this->_energyPoints--;
		std::cout	<< "ScavTrap " << this->_name << " attacks " << target
					<< ", causing " << this->_attackDamage << " points of damage."
					<< std::endl;
	}
	else
		std::cout	<< "ScavTrap " << this->_name << " could not attack." << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout	<< "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
