/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 19:17:00 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/28 21:38:59 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
	int					_rawBits;
	static const int	_fractionalBits = 8;
	public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();
	Fixed	&operator=(const Fixed &other);
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	
};

#endif