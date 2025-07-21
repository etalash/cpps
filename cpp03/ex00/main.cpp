/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:58:36 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:58:44 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap ct1("CT-A");
    ct1.attack("target1");
    ct1.takeDamage(3);
    ct1.beRepaired(2);

    ClapTrap ct2("CT-B");
    ct2.takeDamage(15);
    ct2.beRepaired(5);
    ct2.attack("target2");

    return 0;
}
// This main function demonstrates the usage of the ClapTrap class. It creates two ClapTrap objects,