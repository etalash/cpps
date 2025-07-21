/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:31:10 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:31:18 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain); // deep copy
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain); // deep copy
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!\n";
}
/* This implementation of the Dog class extends the Animal class to create a specific type of animal, the Dog. 
   The class includes a private member variable `brain` of type Brain, which allows the Dog to have its own set of ideas. 
   It includes a default constructor that initializes the Dog and its brain, a copy constructor for creating a new Dog object from an existing one, 
   and an assignment operator for copying values from one object to another while ensuring deep copy of the brain. 
   The destructor cleans up resources when an object is destroyed. The class overrides the makeSound method to provide a specific sound for dogs, 
   allowing for polymorphic behavior in derived classes. */