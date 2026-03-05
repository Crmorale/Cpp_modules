/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:45:13 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/05 00:09:37 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

std::string	get_input(PhoneBook *Book) {
	std::string user_input;
	
	if (!std::getline(std::cin, user_input) || std::cin.eof()) {
		std::cout	<< "Exiting..." << std::endl;
		return ("EXIT");
	}
	user_input = Book->trim_prompt(user_input);
	for (std::string::iterator it = user_input.begin(); it < user_input.end(); it ++) {
		*it = std::toupper(*it); 
	}
	return (user_input);
}


int	main(void) {
	PhoneBook	book;
	std::string	user_input;
	
	std::cout << "Welcome to the PhoneBook!" << std::endl;
	while (true) {
		std::cout	<< std::endl
		 			<< "+---------------- MAIN MENU -----------------"
					<< std::endl
					<< "What would you like to do?" << std::endl;
		user_input = get_input(&book);
		if (user_input == "EXIT")
			break ;
		else if (user_input == "ADD") {
			if (!book.add_contact())
				break;
		}
		else if (user_input == "SEARCH") {
			if (!book.search_contact())
				break;
		}
		else {
			std::cout	<< "Please, enter one of the following commands: " << std::endl
						<< "\tADD:\t add a new contact" << std::endl
						<< "\tSEARCH:\t search through contact list" << std::endl
						<< "\tEXIT\t: exit from PhoneBook" << std::endl;
		}
	}
	std::cout << "Thank you for using PhoneBook technology. See you soon!" << std::endl;
	return (0);
}