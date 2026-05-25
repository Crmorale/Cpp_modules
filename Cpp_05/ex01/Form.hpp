/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:54:19 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 23:32:36 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define	FORM_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;

class Form {
	private:
		const	std::string			_name;
		bool						_is_signed;
		const int					_sign_grade;
		const int					_exec_grade;

	public:
	
		//CONSTRUCTORS
		Form();
		Form(const std::string &name, const int sign_grade, const int exec_grade);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		//GETTERS	
		
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
	
		//MEMBER FUNCTIONS
		void	beSigned(const Bureaucrat &B);

		//EXCEPTIONS
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char *what()	const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw ();
		};

};

std::ostream	&operator<<(std::ostream &os, Form const &form);
	
#endif
