/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 00:05:23 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/04 20:42:12 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact(void)	:	_first_name (""), _last_name (""),_nickname (""),
							_phone_number (""),_darkest_secret (""){
	return ;
}

Contact::~Contact(void){
	return ;
}

					
/*  GETTERS  */

std::string Contact::get_first_name(void) const{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const{
	return (this->_nickname);
}

std::string Contact::get_phone_number() const{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret() const{
	return (this->_darkest_secret);
}

/*  SETTERS  */

/*Set _first_name with the provided string unless it is not composed only by 
alphanumeric characters or it is empty. The first letter and any letter 
following a space are capitalized. Returns true on success, false otherwise. */
bool	Contact::set_first_name(std::string str) {
	if (str.empty()) {
		return (false);  
	}
	else if (!_has_only_alpha(str)) {
		std::cout << "Error: Names can only contain letters, spaces and hyphens." << std::endl;
		return (false);
	}
	str[0] = std::toupper(str[0]);
	for (size_t i = 1; i < str.length(); i++) {
		if (str[i - 1] == ' ' && std::isalpha(str[i])) {
			str[i] = std::toupper(str[i]);
		}
	}
	this->_first_name = str;
	return (true);
}

/*Set _last_name with the provided string unless it is not composed only by 
alphanumeric characters or it is empty. The letters are capitalized. Returns 
true on success, false otherwise. */
bool	Contact::set_last_name(std::string str) {
	if (str.empty())
		return(false);
	if (!_has_only_alpha(str)) {
		std::cout << "Error: Names can only contain letters, spaces and hyphens" << std::endl;
		return (false);
	}
	for (std::string::iterator it = str.begin(); it != str.end(); it++) {
		*it = std::toupper(*it);
	}
	this-> _last_name = str;
	return (true);
}

bool	Contact::set_nickname(std::string str){
	if (str.empty())
		return (false);

	if (!_has_only_alpha(str)){
		std::cout << "Error: Names can only contain letters, spaces and hyphens" << std::endl;
		return (false);
	}
		str[0] = std::toupper(str[0]);
	this-> _nickname = str;
	return (true);
}

bool	Contact::set_phone_number(std::string const str){
	if (str.empty())
		return (false);
	if (!_has_only_digits(str)) {
		std::cout << "Error: Phone numbers can only contain digits" << std::endl;
		return (false);
	}
	this-> _phone_number = str;
	return (true);
}

bool	Contact::set_darkest_secret(std::string str){
	if (str.empty())
		return (false);
	this-> _darkest_secret = str;
	return (true);
}


/****** PRIVATE FUNCTIONS ******/


bool	Contact::_has_only_alpha(std::string const str){
	bool	has_letter = false;
	
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++){
		if (!std::isalpha(*it) && *it != ' ' && *it != '-'){
			return (false);
		}
		else if (std::isalpha(*it))
			has_letter = true;
	}
	return (has_letter);
}

bool	Contact::_has_only_digits(std::string const str) {
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!std::isdigit(*it)){
			return (false);
		}
	}
	return (true);
}


/****** PRIVATE FUNCTIONS ******/

bool	Contact::is_empty(void) const {
	if (this->_first_name.empty()
		|| this->_last_name.empty()
		|| this->_nickname.empty()
		|| this->_phone_number.empty()
		||this->_darkest_secret.empty())
		return(true);
	return (false);
}

bool	Contact::display_contact(void) const {
	if (this->is_empty())
		return (false);
	std::cout	<< std::left << std::setw(20) << "- First name:"
				<< this->get_first_name()		<< std::endl
				<< std::left << std::setw(20) << "- Last name:"
				<< this->get_last_name()		<< std::endl
				<< std::left << std::setw(20) << "- Nickname:"
				<< this->get_nickname()			<< std::endl
				<< std::left << std::setw(20) << "- Phone number:"
				<< this->get_phone_number()		<< std::endl
				<< std::left << std::setw(20) << "- Darkest secret:"
				<< this->get_darkest_secret()	<< std::endl;
	return (true);
}