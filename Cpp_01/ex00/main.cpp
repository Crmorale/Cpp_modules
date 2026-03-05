/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:21:28 by crmorale          #+#    #+#             */
/*   Updated: 2026/02/20 20:21:30 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int	main(void) {
	Zombie *heapZombie = newZombie("Heappie");
	heapZombie->announce();
	delete heapZombie;
	randomChump("Stackie");
	return (0);
}


