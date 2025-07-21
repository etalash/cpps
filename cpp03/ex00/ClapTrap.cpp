/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:58:14 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:58:22 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string& n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap assignment operator called for " << name << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy or is dead. Cannot attack." << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy or is dead. Cannot repair." << std::endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
}
/* This implementation of the ClapTrap class provides a simple simulation of a ClapTrap robot. 
   The class includes a default constructor that initializes the robot with default values, 
   a parameterized constructor for initializing with a specific name, and a copy constructor 
   for creating a new object from an existing one. The assignment operator allows for copying 
   values from one object to another. The destructor outputs a message when an object is destroyed. 
   The class provides methods for attacking a target, taking damage, and being repaired, allowing 
   for basic interactions with the ClapTrap robot. Each method outputs relevant messages to indicate 
   the actions being performed, making it easier to trace the flow of execution during debugging. */