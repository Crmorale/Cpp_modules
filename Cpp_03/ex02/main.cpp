/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 20:15:53 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/09 23:09:43 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    ClapTrap 	clap("Clappy");
	ScavTrap 	scav("Scavy");
	FragTrap	frag("Fraggy");
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
	scav.attack("Fraggy");
	frag.takeDamage(20);
	frag.highFiveGuys();
	frag.attack("Scavy");
	scav.takeDamage(30);
	scav.takeDamage(1000);
	scav.beRepaired(100);
    return 0;
}