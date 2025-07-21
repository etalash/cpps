/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:19:02 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:19:23 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const; // Doesn't override properly!
};

#endif
/* This header file defines the WrongCat class, which inherits from the WrongAnimal class. 
   The WrongCat class includes a default constructor and a destructor. 
   It overrides the makeSound method to provide a specific sound for wrong cats, but it does not override it properly, 
   demonstrating incorrect usage of polymorphism in C++. This class is intended to illustrate how not to implement polymorphic behavior in C++. */

