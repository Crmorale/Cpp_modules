/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:03:11 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/23 12:52:52 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
	std::string	_name;
	std::string	_getName(void) const;
	
	public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void) const;
};

Zombie *zombieHorde(int N, std::string name);

#endif