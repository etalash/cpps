/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:17:30 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:17:38 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
    *this = other;
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!\n";
}
/* This implementation of the Cat class extends the Animal class to create a specific type of animal, the Cat. 
   The class includes a default constructor that initializes the type to "Cat", a copy constructor that allows for creating a new Cat object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor cleans up resources when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for cats, allowing for polymorphic behavior in derived classes. */