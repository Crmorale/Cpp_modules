/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:09:38 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/11 23:49:44 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const &src);
		Dog	 &operator=(Dog const & src);
		~Dog(void);
		
		void	makeSound(void) const;
};

#endif
