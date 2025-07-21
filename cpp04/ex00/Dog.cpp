/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:16:55 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:17:03 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
    *this = other;
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    Animal::operator=(other);
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!\n";
}
/* This implementation of the Dog class extends the Animal class to create a specific type of animal, the Dog. 
   The class includes a default constructor that initializes the type to "Dog", a copy constructor that allows for creating a new Dog object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor cleans up resources when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for dogs, allowing for polymorphic behavior in derived classes. */