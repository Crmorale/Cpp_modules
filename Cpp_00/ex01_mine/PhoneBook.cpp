/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:34:37 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/04 20:45:45 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"

/*  Constructor  */
PhoneBook::PhoneBook(void) : _index(-1), _stop_input(false) {
	return ;
}

/*  Destructor   */
PhoneBook::~PhoneBook(void) {
	return ;
}

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */ 
/******************************************************************************/


/* Asks the user for a line of input and returns it trimmed.
If EOF is detected (Ctrl+D), sets the stop flag and returns an empty string.
If the user submits an empty line, returns an empty string without stopping 
input. */

std::string	PhoneBook::_get_input(std::string const prompt) {
	std::string	input;
	std::cout << "Please enter "<< prompt << ": " << std::endl << "> ";
	if (!std::getline(std::cin, input) || std::cin.eof()) {
		_stop_input = true;
		std::cout << std::endl;
		return (std::string());
	}
	input = trim_prompt(input);
	return (input);
}

/* Prints the list of contacts in the table format. */
void	PhoneBook::_show_table(void) const {
	std::cout	<< "*----------*----------*----------*----------*" << std::endl
				<< "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
				<< "*----------*----------*----------*----------*" << std::endl;
	for (int i = 0; i < 8; i++) {
		_print_contact_row(i);
	}
	std::cout << std::endl;
	return ;
}

/* Prints the contact info in a row and in the table format. */
void	PhoneBook::_print_contact_row(int const index) const {
	if (this->_contact_list[index].is_empty())
		return ;
	std::cout << std::setw(10) << index << "|";
	_format_cell(this->_contact_list[index].get_first_name());
	_format_cell(this->_contact_list[index].get_last_name());
	_format_cell(this->_contact_list[index].get_nickname());
	std::cout	<< std::endl
				<< "*----------*----------*----------*----------*" << std::endl;
	return ; 
}
/* Formats and prints a 10 character-wide cell in the contact table. It doesn´t 
display anything if  the contact is empty. */
void	PhoneBook::_format_cell(std::string str) const {
	if (str.length() > 10) {
		str.resize(9);
		str+= ".";
	}
	std::cout << std::setw(10) << str << "|";
	return ;
}

bool	PhoneBook::_show_contact_at_index(std::string const input) const {
	int	index;
	if (input.length() == 1 && std::isdigit(input[0])) {
		index = input[0] - '0';
		if (index >= 0 && index <= 7) {
			if (this->_contact_list[index].display_contact())
				return (true);
			else {
				std::cout	<< "Error: no saved contact at index [" << index << "]." << std::endl
							<< "Please, ADD a contact and try again." << std::endl;
				return (false);
			}
		}
	}
	std::cout	<< "Error: \'" << input << "\' is not a valid index. "
				<< "Type a digit between 0 and 7 and try again." << std::endl;
	return (false);
}


/******************************************************************************/
/*                             PUBLIC FUNCTIONS                               */ 
/******************************************************************************/
	
std::string	PhoneBook::trim_prompt(std::string str) {
	std::string	exclude = " \n\t\r\v\f";
	size_t		start;
	size_t 		end;

	start	= str.find_first_not_of(exclude);
	end		= str.find_last_not_of(exclude);
	if (start == std::string::npos)
		return ("");
	return (str.substr(start, end - start + 1));
}

bool	PhoneBook::add_contact(void) {
	std::string input;
	int			temp_index;

	if (_index == -1)
		temp_index = 0;
	else
		temp_index = (_index + 1) % 8;

	std::cout << "+---------- ADDING A NEW CONTACT -----------+" << std::endl;
	while (!_stop_input) {
		input = _get_input("a name:");
		if (_stop_input || this->_contact_list[temp_index].set_first_name(input))
			break ;
	}
	while (!_stop_input) {
		input = _get_input("a last name:");
		if (_stop_input || this->_contact_list[temp_index].set_last_name(input))
			break ;
	}
	while (!_stop_input) {
		input = _get_input("a nickname:");
		if (_stop_input || this->_contact_list[temp_index].set_nickname(input))
			break ;
	}
	while (!_stop_input) {
		input = _get_input("a phone number.");
		if (_stop_input || this->_contact_list[temp_index].set_phone_number(input))
			break ;
	}
	while (!_stop_input) {
		input = _get_input("a darkest secret:");
		if (_stop_input || this ->_contact_list[temp_index].set_darkest_secret(input))
			break ;
	}
	if (_stop_input) {
		std::cout << "Error: contact could not be saved. Please, try adding it again." << std::endl;
		_stop_input = false;
		return (false);
	}
	std::cout << "New contact successfully saved." << std::endl;
	_index = temp_index;
	return (true);
}

bool	PhoneBook::search_contact(void) {
	std::string	input;
	
	std::cout << "+----------  SEARCH CONTACT MENU  ----------+" << std::endl << std::endl;
	if (_index == -1) {
		std::cout << "No contacts saved. Please, add a contact first." << std::endl;
		return (true);
	}
		this->_show_table();
		input = _get_input("a contact index to display its info.");
		if (_stop_input) {
			_stop_input = false;
			return (false);
		}
		if (input.empty())
			return (true);
		this->_show_contact_at_index(input);
		return (true);
}



