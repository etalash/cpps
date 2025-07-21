/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:59:59 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 15:47:47 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"  // Use ClapTrap, don’t redefine it!

#include <string>
#include <iostream>

class ScavTrap : public ClapTrap {
public:
    ScavTrap();                                 // Default constructor
    ScavTrap(const std::string& name);          // Param constructor
    ScavTrap(const ScavTrap& other);            // Copy constructor
    ScavTrap& operator=(const ScavTrap& other); // Assignment
    ~ScavTrap();                                // Destructor

    void attack(const std::string& target);     // Override attack
    void guardGate();                           // Unique to ScavTrap
};

#endif


/* This header file defines the ScavTrap class, which inherits from the ClapTrap class. 
   The ScavTrap class includes constructors for default initialization, parameterized initialization with a name, 
   a copy constructor for creating a new object from an existing one, and an assignment operator for copying values 
   from one object to another. The destructor is defined to clean up resources when an object is destroyed. 
   The class provides an attack method that overrides the base class method and a guardGate method specific to ScavTrap, 
   allowing for additional functionality in the ScavTrap robot. */