/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 22:33:09 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/09 23:04:12 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>


/******************************    CANONICAL FORM   *******************************/

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "FragTrap default constructor called" << std::endl;
	 _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
	return ;	
}

	
FragTrap::FragTrap(const FragTrap &other)  : ClapTrap(other){
	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name 		= other._name;
		this->_hitPoints 	= other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}


/****************************    PUBLIC FUNCTIONS   ***************************/

void	FragTrap::attack(const std::string &target) {
	if (this->_hitPoints > 0 && this-> _energyPoints > 0) {
		this->_energyPoints--;
		std::cout	<< "FragTrap " << this->_name << " attacks " << target
					<< ", causing " << this->_attackDamage << " points of damage."
					<< std::endl;
	}
	else
		std::cout	<< "FragTrap " << this->_name << " could not attack." << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Heeey, let´s high fives guys!" << std::endl;
}
