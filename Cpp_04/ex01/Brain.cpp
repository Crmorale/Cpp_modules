/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 23:06:21 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/12 00:03:39 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;	
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain () {
	std::cout << "Brain destructor called" << std::endl;
}