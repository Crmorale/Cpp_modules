/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 23:58:25 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 21:59:38 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <string>

class Intern {
	
	public:
		Intern();
		Intern (const Intern &other);
		Intern	&operator=(const Intern &other);
		~Intern();
	
		//MEMBER FUNCTION
		AForm	*makeForm(const std::string &form_name, const std::string &form_target);	
};