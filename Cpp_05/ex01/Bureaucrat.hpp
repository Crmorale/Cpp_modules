/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:15:33 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/04 13:20:52 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		//CONSTRUCTORS
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
		
	    //GETTERS
		std::string	getName() const ;
		int			getGrade() const;

		//INCREMENT/DECREMENT
		void	incrementGrade();
		void	decrementGrade();
		
		//EXCEPTIONS
		class GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
	
		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		//MEMBER FUNCTION
		void	signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b);

#endif
