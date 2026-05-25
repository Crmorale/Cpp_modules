/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:15:21 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 23:55:53 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

//Creates the base part with AForm constructor and the derived part with its attribute.
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5),
	_target(target) {
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other),
	_target(other._target){
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this != &other) {
		AForm::operator=(other);
		_target  = other._target;
	}
	return (*this);
}

void PresidentialPardonForm::executeAction() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}
	