/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:51:44 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 15:51:48 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap fraggy("Fraggy");
    fraggy.attack("BadBot");
    fraggy.takeDamage(40);
    fraggy.beRepaired(25);
    fraggy.highFivesGuys();

    std::cout << "\n--- Mix with ScavTrap ---\n" << std::endl;

    ScavTrap scav("Scavvy");
    scav.guardGate();

    return 0;
}
// This main function demonstrates the usage of both FragTrap and ScavTrap classes, which are derived from ClapTrap.