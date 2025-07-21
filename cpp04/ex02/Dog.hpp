/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:44:08 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:44:10 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};

#endif
/* This header file defines the Dog class, which inherits from the Animal class and represents a specific type of animal, the Dog. 
   The class includes a private member variable `brain` of type Brain, which allows the Dog to have its own set of ideas. 
   It includes a default constructor that initializes the Dog, a copy constructor for creating a new Dog object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor cleans up resources when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for dogs, allowing for polymorphic behavior in derived classes. */