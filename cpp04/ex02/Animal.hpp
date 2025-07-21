/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:38:34 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:38:42 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const = 0; // 👈 PURE VIRTUAL
};

#endif
/* This header file defines the Animal class, which serves as a base class for all animals. 
   It includes a protected member variable `type` to store the type of the animal, a default constructor, 
   a copy constructor, an assignment operator, and a virtual destructor to ensure proper cleanup of derived classes. 
   The class provides a method to get the type of the animal and a pure virtual method `makeSound`, 
   which must be implemented by derived classes to provide specific animal sounds. */