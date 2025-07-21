/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:00:26 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 15:49:06 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_Scav") {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "ScavTrap assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "ScavTrap " << name << " is out of energy or dead!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " viciously attacks " << target
              << ", dealing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
/* This implementation of the ScavTrap class extends the ClapTrap class to create a specialized robot with enhanced attributes and behaviors. 
   The class includes a default constructor that initializes the ScavTrap with specific hit points, energy points, and attack damage, 
   as well as a parameterized constructor for initializing with a specific name. The copy constructor allows for creating a new ScavTrap object from an existing one, 
   and the assignment operator enables copying values from one object to another. The destructor outputs a message when an object is destroyed. 
   The class provides an attack method that overrides the base class method to include specific behavior for ScavTrap, and a guardGate method that allows the ScavTrap to enter a special mode. 
   Each method outputs relevant messages to indicate the actions being performed, making it easier to trace the flow of execution during debugging. */