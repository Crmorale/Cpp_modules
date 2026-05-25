/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:33:06 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 23:39:19 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void	testForm(Intern &intern, Bureaucrat &boss, Bureaucrat &junior,
	const std::string &formName, const std::string &target) {
		
	std::cout << "\n===== Testing: " << formName << " =====" << std::endl;
	AForm *form = intern.makeForm(formName, target);

	if (!form)
	{
		std::cout << "No form created for request: " << formName << std::endl;
		return ;
	}
	std::cout << *form;
	junior.signForm(*form);
	boss.signForm(*form);
	try
	{
		form->execute(junior);
	}
	catch (const std::exception &e)
	{
		std::cout << "Execution by junior failed: " << e.what() << std::endl;
	}
	try
	{
		form->execute(boss);
	}
	catch (const std::exception &e)
	{
		std::cout << "Execution by boss failed: " << e.what() << std::endl;
	}
	delete form;
}

int	main() {
	srand(time(NULL));
	
	try
	{
		Intern		intern;
		Bureaucrat	boss("Boss", 1);
		Bureaucrat	junior("Junior", 150);

		testForm(intern, boss, junior, "shrubbery creation", "Peter");
		testForm(intern, boss, junior, "robotomy request", "Willow");
		testForm(intern, boss, junior, "presidential pardon", "Atreyu");
		testForm(intern, boss, junior, "unknown form", "Nobody");
	}
	catch (const std::exception &e)
	{
		std::cout << "Fatal error in main: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
