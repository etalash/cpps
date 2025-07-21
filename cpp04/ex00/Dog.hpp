/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:16:38 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:16:45 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};

#endif
/* This header file defines the Dog class, which inherits from the Animal class. 
   The Dog class includes a default constructor, a copy constructor for creating a new Dog object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor is defined to clean up resources when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for dogs, allowing for polymorphic behavior in derived classes. */