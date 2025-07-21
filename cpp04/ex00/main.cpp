/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:17:51 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:17:58 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "\n--- Correct Polymorphism ---\n";
    const Animal* a = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " makes sound: ";
    dog->makeSound();

    std::cout << cat->getType() << " makes sound: ";
    cat->makeSound();

    std::cout << a->getType() << " makes sound: ";
    a->makeSound();

    delete a;
    delete dog;
    delete cat;

    std::cout << "\n--- Wrong Polymorphism ---\n";
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    wc->makeSound(); // should output WRONG because makeSound() is NOT virtual
    wa->makeSound();

    delete wa;
    delete wc;

    return 0;
}
/* This main function demonstrates the usage of polymorphism with the Animal, Dog, and Cat classes. 
   It creates instances of these classes and calls their makeSound methods to show how polymorphism works. 
   The WrongAnimal and WrongCat classes are also demonstrated to show the difference when the makeSound method is not virtual. 
   The program outputs the type of each animal and the sound they make, illustrating both correct and incorrect polymorphic behavior. */