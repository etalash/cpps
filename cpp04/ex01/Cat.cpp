/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:31:55 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:32:03 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!\n";
}
/* This implementation of the Cat class extends the Animal class to create a specific type of animal, the Cat. 
   The class includes a private member variable `brain` of type Brain, which allows the Cat to have its own set of ideas. 
   It includes a default constructor that initializes the Cat and its brain, a copy constructor for creating a new Cat object from an existing one, 
   and an assignment operator for copying values from one object to another while ensuring deep copy of the brain. 
   The destructor cleans up resources when an object is destroyed. The class overrides the makeSound method to provide a specific sound for cats, 
   allowing for polymorphic behavior in derived classes. */