/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:51:23 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 15:51:31 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_Frag") {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five! ✋" << std::endl;
}
/* This implementation of the FragTrap class extends the ClapTrap class to create a specialized robot with enhanced attributes and behaviors. 
   The class includes a default constructor that initializes the FragTrap with specific hit points, energy points, and attack damage, 
   as well as a parameterized constructor for initializing with a specific name. The copy constructor allows for creating a new FragTrap object from an existing one,
   and the assignment operator is defined to copy values from one object to another. The destructor cleans up resources when an object is destroyed. 
   The class provides a unique method highFivesGuys, allowing for additional functionality in the FragTrap robot. */