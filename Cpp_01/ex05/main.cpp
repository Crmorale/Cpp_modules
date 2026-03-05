/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:41:29 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/28 11:44:35 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl customer;
	
	customer.complain("debug");
	customer.complain("info");
	customer.complain("warning");
	customer.complain("error");
	
	return 0;
}