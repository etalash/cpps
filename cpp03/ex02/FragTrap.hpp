/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:50:54 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 15:56:37 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ex01/ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys();
};

#endif


/* This header file defines the FragTrap class, which inherits from the ClapTrap class. 
   The FragTrap class includes constructors for default initialization, parameterized initialization with a name, 
   a copy constructor for creating a new object from an existing one, and an assignment operator for copying values 
   from one object to another. The destructor is defined to clean up resources when an object is destroyed. 
   The class provides a unique method highFivesGuys, allowing for additional functionality in the FragTrap robot. */