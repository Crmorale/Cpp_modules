/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:54:21 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/24 15:54:43 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : _name("Default"), _is_signed(false), _sign_grade(150),
	_exec_grade(150) {
		std::cout << "AForm called " << _name  << " has been created." << std::endl;
}

AForm::AForm(const std::string &name, int sign_grade,
	int exec_grade) : _name(name), _is_signed(false),
	_sign_grade(sign_grade), _exec_grade(exec_grade) {
		if (sign_grade < 1 || exec_grade < 1)
			throw GradeTooHighException();
		else if (sign_grade > 150 || exec_grade > 150)
			throw GradeTooLowException();
		std::cout << "AForm called " << _name  << " has been created." << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _is_signed(other._is_signed),
	_sign_grade(other._sign_grade), _exec_grade(other._exec_grade) {
	std::cout << "AForm called " << _name << " has been created" << std::endl;
}

AForm	&AForm::operator=(const AForm &other) {
	if (this != &other)
		_is_signed = other._is_signed;
	return (*this);
}

AForm::~AForm() {
	
}

std::string	AForm::getName() const {
	return (_name);
}

bool		AForm::getIsSigned() const {
	return (_is_signed);
}

int			AForm::getSignGrade() const {
	return (_sign_grade);
}

int			AForm::getExecGrade() const {
	return (_exec_grade);
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Exception: Grade is too high!");	
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Exception: Grade is too low!");
}

const char	*AForm::FormNotSignedException::what() const throw() {
	return ("Exception: Form is not signed yet!");
}

void		AForm::beSigned(Bureaucrat const &B) {
	if (_is_signed) {
		std::cout	<< "Bureaucrat called " << B.getName() << " could not sign form called "
					<< _name << " because it is already signed." << std::endl;
		return ;
	}
	if (B.getGrade() <= this->_sign_grade)
		_is_signed = true;
	else
		throw (GradeTooLowException());
}

void AForm::execute(Bureaucrat const &executor) const {
	if (!_is_signed)
		throw (FormNotSignedException());
	else if (executor.getGrade() > this->_exec_grade)
		throw (GradeTooLowException());
	executeAction();
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << "AForm called "	<< form.getName()		<< " has the following attributes:\n";
	os << "_is_signed: "	<< form.getIsSigned()	<< '\n';
	os << "_sign_grade: "	<< form.getSignGrade()	<< '\n';
	os << "_exec_grade: "	<< form.getExecGrade()	<< '\n'; 
	return (os);
}
