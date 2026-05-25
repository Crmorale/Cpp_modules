/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:15:00 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 23:55:26 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

//Creates the base part with AForm constructor and the derived part with its attribute.
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45),
	_target(target) {
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other),
	_target(other._target){
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		AForm::operator=(other);
		_target  = other._target;
	}
	return (*this);
}

void RobotomyRequestForm::executeAction() const
{
	std::cout << "BZZZZZZZZ DRRRRRRRR" << std::endl;

	// rand() returns a "big" number and "%2" converts it into 1 or 0.
	if (std::rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}
