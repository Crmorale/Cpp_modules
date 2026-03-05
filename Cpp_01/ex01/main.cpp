/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 19:11:24 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/23 12:26:50 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


int	main(void) {
	int			N;
	std::string	name;

	std::cout << "Dear boss, how many zombies do you want into the horde?" << std::endl;
	std::cin >> N;
	while (N <= 0) {
		std::cout << "Please, type a number greater than 0." << std::endl;
		std::cin >> N;
	}
	std::cout << "And what is the name of the horde?" << std::endl;
	std::cin >> name;
	std::cout << "Thank you. We are working on it." << std::endl;
	Zombie *horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}