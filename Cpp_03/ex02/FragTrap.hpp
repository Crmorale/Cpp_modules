/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 22:33:06 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/09 22:59:26 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Frag_TRAP_HPP
# define Frag_TRAP_HPP

#include <string>
#include "ClapTrap.hpp"

 class FragTrap : public ClapTrap {
	public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	void	attack(const std::string &target);
	void	highFiveGuys(void);
};

#endif