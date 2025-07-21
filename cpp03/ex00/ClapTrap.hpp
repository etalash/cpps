/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:57:53 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:58:01 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();                                // Default constructor
    ClapTrap(const std::string& name);         // Param constructor
    ClapTrap(const ClapTrap& other);           // Copy constructor
    ClapTrap& operator=(const ClapTrap& other);// Copy assignment
    ~ClapTrap();                               // Destructor

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
/* This header file defines the ClapTrap class, which represents a ClapTrap robot with attributes for name, hit points, energy points, and attack damage. 
   The class includes a default constructor, a parameterized constructor for initializing with a name, a copy constructor for creating a new object from an existing one, 
   and a copy assignment operator for assigning values from one object to another. The destructor is defined to clean up resources when an object is destroyed. 
   The class provides methods for attacking a target, taking damage, and being repaired, allowing for basic interactions with the ClapTrap robot. */