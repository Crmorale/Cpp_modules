/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:09:38 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/10 23:13:28 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &src);
		Dog	 &operator=(Dog const & src);
		~Dog(void);
		
		void	makeSound(void) const;
};

#endif
