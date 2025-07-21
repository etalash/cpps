/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:18:15 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:18:30 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const; // ❌ Not virtual
};

#endif
/* This header file defines the WrongAnimal class, which serves as a base class for animals that do not follow the correct polymorphic behavior. 
   It includes a protected member variable `type` to store the type of the animal, a default constructor, and a destructor. 
   The class provides a method to get the type of the animal and a method `makeSound`, which is not virtual, meaning it does not support polymorphism correctly. 
   This class is intended to demonstrate incorrect usage of polymorphism in C++. */