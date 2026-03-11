/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:09:45 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/10 23:13:39 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		Cat	 &operator=(Cat const & src);
		~Cat();

		void	makeSound() const;
};

#endif
