/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:06:12 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/24 22:08:49 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
	private:
	std::string _name;
	Weapon		&_weapon;
	
	public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA(void);
	void	attack(void) const;
};

#endif