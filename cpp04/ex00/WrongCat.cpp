/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:19:46 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:19:53 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat meows???\n";
}
/* This implementation of the WrongCat class extends the WrongAnimal class to create a specific type of wrong animal, the WrongCat. 
   The class includes a default constructor that initializes the type to "WrongCat" and a destructor that outputs a message when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for wrong cats, but it does not override it properly, demonstrating incorrect usage of polymorphism in C++. 
   This class is intended to illustrate how not to implement polymorphic behavior in C++. */