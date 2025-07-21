/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:39:18 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:39:21 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

// #include "Animal.hpp" // ✔ okay to include but can't instantiate anymore

int main() {
    // Animal a; // ❌ This should NOT compile — abstract class

    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; ++i) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < 2; ++i)
        delete animals[i];

    return 0;
}
/* This main function demonstrates polymorphism with the Animal class. 
   It creates an array of Animal pointers, where each pointer points to either a Dog or a Cat object. 
   The program then iterates through the array, calling the getType and makeSound methods on each animal, 
   which will invoke the appropriate methods for Dog and Cat due to polymorphism. Finally, it cleans up by deleting each animal object. */