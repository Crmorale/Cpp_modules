/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:54:19 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 21:59:23 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
#define	AFORM_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const	std::string			_name;
		bool						_is_signed;
		const int					_sign_grade;
		const int					_exec_grade;

		protected:
		virtual void	executeAction() const = 0;

	public:
		//CONSTRUCTORS
		AForm();
		AForm(const std::string &name, int sign_grade, int exec_grade);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		//GETTERS		
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
	
		//MEMBER FUNCTIONS
		void	beSigned(Bureaucrat const &B);
		void	execute(Bureaucrat const &executor) const;
	

		//EXCEPTIONS
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char *what()	const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw ();
		};

		class	FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, AForm const &form);
	
#endif