/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:33:14 by crmorale          #+#    #+#             */
/*   Updated: 2026/05/25 21:58:07 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERCREATIONFORM_HPP
#define SHRUBBERCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string		_target;
	
	protected:
		virtual void	executeAction() const;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
};

#endif
