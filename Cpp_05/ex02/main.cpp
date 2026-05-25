/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:33:06 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/26 00:25:25 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

static void	testForm(Bureaucrat &high, Bureaucrat &low, AForm &form)
{
	std::cout << "\n===== Testing: " << form.getName() << " =====" << std::endl;
	std::cout << form;
	low.signForm(form);
	high.signForm(form);
	try {
		form.execute(low);
	}
	catch (const std::exception &e) {
		std::cout << "Execution by low failed: " << e.what() << std::endl;
	}
	try {
		form.execute(high);
	}
	catch (const std::exception &e) {
		std::cout << "Execution by high failed: " << e.what() << std::endl;
	}
}

int main()
{
	try {
		Bureaucrat boss("Boss", 1);
		Bureaucrat mid("Mid", 50);
		Bureaucrat junior("Junior", 150);

		ShrubberyCreationForm shrub("Garden");
		RobotomyRequestForm robot("Peter");
		PresidentialPardonForm pardon("Donald Trump");

		testForm(boss, junior, shrub);
		testForm(boss, junior, robot);
		testForm(boss, mid, pardon);
	}
	catch (const std::exception &e) {
		std::cout << "Fatal error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
