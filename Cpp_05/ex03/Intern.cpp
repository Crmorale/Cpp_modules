/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 23:58:14 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 22:08:08 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern () {
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern(const Intern &other) {
	std::cout << "Intern copy constructor called." << std::endl;
	(void)other;
}

Intern	&Intern::operator=(const Intern &other) {
	if (this != &other) {	
	}
	(void)other;
	return (*this);
}

Intern::~Intern() {
	
}

AForm *Intern::makeForm(const std::string &form_name,
						const std::string &form_target) {
	std::string	form_types[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	int i;
	
	for (i = 0; i < 3 && form_name != form_types[i]; i++){
		
	};
	
	switch(i) {
		case 0:
			std::cout << "Intern creates " << form_name << std::endl;
			return (new ShrubberyCreationForm(form_target));
			
		case 1:
			std::cout << "Intern creates " << form_name << std::endl;
			return (new RobotomyRequestForm(form_target));
			
		case 2:
			std::cout << "Intern creates " << form_name << std::endl;
			return (new PresidentialPardonForm(form_target));
			
		default:
			std::cout << "Error: form name does not exist" << std::endl;
			return NULL;
	}
}
