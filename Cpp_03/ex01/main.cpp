/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 20:15:53 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/09 15:01:44 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap("Clappy");
	ScavTrap scav("Scavy");
    clap.attack("Scavy");
    scav.takeDamage(0);
    scav.beRepaired(3);
    scav.attack("Clappy");
	scav.guardGate();
	clap.takeDamage(20);
	std::cout 	<< "Scavy has " << scav.getHitPoints() << " hit points."
				<< std::endl;
	clap.beRepaired(5);
	scav.attack("Scavy");
	scav.takeDamage(1000);
	scav.beRepaired(100);
    return 0;
}