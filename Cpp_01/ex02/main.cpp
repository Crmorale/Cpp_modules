/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:18:24 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/23 15:42:01 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream> 

int	main(void) {
	
	std::string	str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "The address of str is: "		<< &str			<< std::endl;
	std::cout << "The adress of stringPTR is: "	<< stringPTR	<< std::endl;
	std::cout << "The address of stringREF is "	<< &stringREF	<< std::endl;

	std::cout << "The value of str is: "		<< str			<< std::endl;
	std::cout << "The value of stringPTR is: "	<< *stringPTR	<< std::endl;
	std::cout << "The value of stringREF is: "	<< stringREF	<< std::endl;

	return (0);	
}

