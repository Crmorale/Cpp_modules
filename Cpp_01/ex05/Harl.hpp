/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:40:18 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/27 12:47:49 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
	public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif