/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:17:14 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:17:20 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif
/* This header file defines the Cat class, which inherits from the Animal class. 
   The Cat class includes a default constructor, a copy constructor for creating a new Cat object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor is defined to clean up resources when an object is destroyed. 
   The class overrides the makeSound method to provide a specific sound for cats, allowing for polymorphic behavior in derived classes. */