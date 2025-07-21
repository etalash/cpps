/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:02:46 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 15:02:51 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ClapTrap basic("Clappy");
    basic.attack("enemy1");
    basic.beRepaired(3);

    std::cout << "\n--- ScavTrap Time ---\n" << std::endl;

    ScavTrap scav("Scavvy");
    scav.attack("enemy2");
    scav.takeDamage(40);
    scav.beRepaired(20);
    scav.guardGate();

    return 0;
}
// This main function demonstrates the usage of the ScavTrap class, which is a derived class from ClapTrap.