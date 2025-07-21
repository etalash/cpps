/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:29:24 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 16:29:32 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& other) {
    *this = other;
    std::cout << "Brain copy constructor called\n";
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called\n";
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    return (index >= 0 && index < 100) ? ideas[index] : "";
}
/* This implementation of the Brain class provides a simple representation of a brain with an array of ideas. 
   The class includes a default constructor that initializes the ideas, a copy constructor for creating a new Brain object from an existing one, 
   and an assignment operator for copying values from one object to another. The destructor cleans up resources when an object is destroyed. 
   The class provides methods to set and get ideas at specific indices, allowing for manipulation of the brain's ideas. */