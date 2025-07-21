/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:32:20 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:36:10 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "\n--- Animal Array Test ---\n";

    const int N = 4;
    Animal* animals[N];

    for (int i = 0; i < N; ++i) {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < N; ++i)
        delete animals[i];  // should call destructors properly

    std::cout << "\n--- Deep Copy Test ---\n";

    Dog d1;
    d1.makeSound();

    Dog d2 = d1;
    d2.makeSound();

    return 0;
}
/* This main function demonstrates the usage of the Animal, Cat, and Dog classes. 
   It creates an array of Animal pointers, half of which point to Dog objects and the other half to Cat objects. 
   After populating the array, it deletes each animal, which should call the appropriate destructors for each type. 
   The second part of the main function tests deep copying by creating a Dog object, making it sound, 
   then copying it to another Dog object and making the copy sound as well. This ensures that the copy constructor works correctly. */