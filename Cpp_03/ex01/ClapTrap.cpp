/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 20:15:59 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/09 22:32:13 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>


/******************************    CANONICAL FORM   *******************************/

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;	
}

	
ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name 		= other._name;
		this->_hitPoints 	= other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}


/********************************    GETTERS   ********************************/

std::string		ClapTrap::getName(void) const {
	return (this ->_name);
}
	
unsigned int	ClapTrap::getHitPoints(void) const {
	return (this ->_hitPoints);
}
	
unsigned int	ClapTrap::getEnergyPoints(void) const {
	return (this ->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (this ->_attackDamage);
}


/****************************    PUBLIC FUNCTIONS   ***************************/

void	ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints > 0 && this-> _energyPoints > 0) {
		this->_energyPoints--;
		std::cout	<< "ClapTrap " << this->_name << " attacks " << target
					<< ", causing " << this->_attackDamage << " points of damage."
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << this->_name << " could not attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout	<< "ClapTrap " << this->_name << " takes  " << amount
				<< " points of damage.";
	if (this->_hitPoints == 0)
		std::cout	<< " ClapTrap " << this->_name << " has been destroyed.";
	std::cout << std::endl;	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		this->_energyPoints--;
		this->_hitPoints += amount;   
		std::cout	<< "ClapTrap " << this->_name << " has been repaired an amount of "
					<< amount << " hit points." << std::endl;	
	}
	else 
		std::cout	<< "ClapTrap " << this->_name << " could not repair itself." << std::endl;
	}
