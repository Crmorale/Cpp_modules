/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 00:05:33 by crmorale          #+#    #+#             */
/*   Updated: 2026/01/19 00:17:20 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact{
	private :
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	bool		_has_only_alpha(std::string const str);
	bool		_has_only_digits(std::string const str);
	
	public:
		Contact(void);
		~Contact(void);
	
		bool	is_empty(void) const;
		bool	display_contact(void) const;
		
		// Getters
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		
		// Setters
		bool		set_first_name(std::string const str);
		bool		set_last_name(std::string const str);
		bool		set_nickname(std::string const str);
		bool		set_phone_number(std::string const str);
		bool		set_darkest_secret(std::string const str);

};

#endif