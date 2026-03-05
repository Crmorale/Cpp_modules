/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 20:56:29 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 12:27:39 by crmorale         ###   ########.fr       */
/*                   q                                                         */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
	private:
	std::string	_name;
	Weapon		*_weapon;

	
	public:
	HumanB(std::string const &name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

};

#endif