/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:16:17 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:16:26 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound...\n";
}
/* This implementation of the Animal class provides a base class for all animals. 
   The class includes a default constructor that initializes the type to "Animal", 
   a copy constructor that allows for creating a new Animal object from an existing one, 
   and an assignment operator for copying values from one object to another. 
   The destructor cleans up resources when an object is destroyed. 
   The class provides a method to get the type of the animal and a virtual method makeSound, 
   which can be overridden by derived classes to implement specific animal sounds. */