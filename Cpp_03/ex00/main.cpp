/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 20:15:53 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/08 22:29:19 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(20);
    return 0;
}