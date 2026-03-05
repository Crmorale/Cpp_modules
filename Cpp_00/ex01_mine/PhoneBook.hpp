/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:38:56 by crmorale          #+#    #+#             */
/*   Updated: 2026/01/28 21:20:01 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <string>

class	PhoneBook {
	private:
	int		_index;
	bool	_stop_input;
	Contact _contact_list[8];

	std::string _get_input(std::string const prompt);
	void		_show_table(void) const;
	void		_print_contact_row(int const index) const;
	void		_format_cell(std::string const str) const;
	bool		_show_contact_at_index(std::string const input) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		std::string	trim_prompt(std::string str);
		bool		add_contact(void);
		bool		search_contact(void);
};

#endif