/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:18:43 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:18:50 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called\n";
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound...\n";
}
/* This implementation of the WrongAnimal class provides a base class for animals that do not follow the correct polymorphic behavior. 
   The class includes a default constructor that initializes the type to "WrongAnimal" and a destructor that outputs a message when an object is destroyed. 
   The class provides a method to get the type of the animal and a method makeSound, which is not virtual, meaning it does not support polymorphism correctly. 
   This class is intended to demonstrate incorrect usage of polymorphism in C++. */