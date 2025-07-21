/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:31:31 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:36:26 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif
/* This header file defines the Cat class, which inherits from the Animal class and represents a specific type of animal, the Cat. 
   The class includes a private member variable `brain` of type Brain, which allows the Cat to have its own set of ideas. 
   It includes a default constructor that initializes the Cat, a copy constructor for creating a new Cat object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor cleans up resources when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for cats, allowing for polymorphic behavior in derived classes. */