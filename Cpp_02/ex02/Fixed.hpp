/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:02:51 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/02 23:04:04 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int					_rawBits;
    static const int	_fractionalBits = 8;

public:
    // Orthodox Canonical Form
    Fixed();
    Fixed(const int n);
    Fixed(const float f);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    // Conversions
    float   toFloat(void) const;
    int     toInt(void) const;

	//Setter & getter

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	
    // Comparison operators
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

    // Arithmetic operators
    Fixed	operator+(const Fixed &other) const;
    Fixed	operator-(const Fixed &other) const;
    Fixed	operator*(const Fixed &other) const;
    Fixed	operator/(const Fixed &other) const;

    // Increment / Decrement
	Fixed&	operator++();		//pre-increment
	Fixed	operator++(int);	//post-increment
	Fixed&	operator--();		//pre-decrement
	Fixed	operator--(int);	//post-decrement
	
    // Min / Max
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
};

// Stream operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif