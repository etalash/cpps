/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:38:57 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:39:03 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
    type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const {
    return type;
}
void Animal::makeSound() const {
    std::cout << "Animal sound...\n";
}