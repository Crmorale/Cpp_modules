/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 19:16:16 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/01 21:32:55 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/****************   CONSTRUCTOR, COPY CONSTRUCTOR & DESTRUCTOR ****************/

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}


/****************************   NEW CONSTRUCTORS   ****************************/

Fixed::Fixed(const int num) : _rawBits(num << _fractionalBits) { 
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float fNum) : _rawBits(roundf( fNum* (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}


/********************************   OPERATOR   ********************************/

Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other._rawBits;
	return (*this);
}


/*********************************   GETTER   *********************************/

int	Fixed::getRawBits(void) const {
		std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

/*********************************   SETTER   *********************************/

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
	return ;
}

/******************************   PUBLIC FUNCTIONS   *******************************/

float	Fixed::toFloat(void) const {
	return ((float)_rawBits /(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_rawBits >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &num) {
	out << num.toFloat();
	return  (out);
}


	
