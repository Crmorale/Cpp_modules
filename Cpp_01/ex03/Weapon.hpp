/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 16:10:42 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 13:04:21 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	private:
	std::string	_type;

	public:
	Weapon(std::string const &type);
	~Weapon();
	std::string const	&getType(void) const;
	void				setType(std::string const &newType);
};

#endif