/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:09:48 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/11 23:58:40 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() {
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called" << std::endl;	
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
		this->Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat () {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}
