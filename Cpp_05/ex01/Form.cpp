/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:54:21 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 23:33:37 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _name("Default"), _is_signed(false), _sign_grade(150),
	_exec_grade(150) {
		std::cout << "Form called " << _name  << " has been created." << std::endl;
}

Form::Form(const std::string &name, const int sign_grade,
	const int exec_grade) : _name(name), _is_signed(false),
	_sign_grade(sign_grade), _exec_grade(exec_grade) {
		if (sign_grade < 1 || exec_grade < 1)
			throw GradeTooHighException();
		else if (sign_grade > 150 || exec_grade > 150)
			throw GradeTooLowException();
		std::cout << "Form called " << _name  << " has been created." << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _is_signed(other._is_signed),
	_sign_grade(other._sign_grade), _exec_grade(other._exec_grade) {
	std::cout << "Form called " << _name << " has been created" << std::endl;
}

Form 	&Form::operator=(const Form &other) {
	if (this != &other)
		_is_signed = other._is_signed;
	return (*this);
}

Form::~Form() {
	
}

std::string	Form::getName() const {
	return (_name);
}

bool		Form::getIsSigned() const {
	return (_is_signed);
}

int			Form::getSignGrade() const {
	return (_sign_grade);
}

int			Form::getExecGrade() const {
	return (_exec_grade);
}

void	Form::beSigned(const Bureaucrat &B) {
	if (_is_signed) {
		std::cout	<< "Bureaucrat called " << B.getName() << " could not sign form called "
					<< _name << " because it is already signed." << std::endl;
		return ;
	}
	if (B.getGrade() <= _sign_grade)
		_is_signed = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");	
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "Form called "	<< form.getName()		<< " has the following attributes:\n";
	os << "_is_signed: "	<< form.getIsSigned()	<< '\n';
	os << "_sign_grade: "	<< form.getSignGrade()	<< '\n';
	os << "_exec_grade: "	<< form.getExecGrade()	<< '\n'; 
	return (os);
}
