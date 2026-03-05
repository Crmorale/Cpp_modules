/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:02:51 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/02 20:08:07 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
	int					_rawBits;
	static const int	_fractionalBits = 8;
	
	public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	Fixed	&operator=(const Fixed &other);
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &num);

#endif