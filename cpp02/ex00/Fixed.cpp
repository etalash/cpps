/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:20:11 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:20:22 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _rawBits = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _rawBits;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _rawBits = raw;
}
/* This implementation of the Fixed class provides a simple fixed-point number representation. 
   The class includes a default constructor that initializes the raw bits to zero, a copy constructor 
   that allows for creating a new Fixed object from an existing one, and a copy assignment operator 
   that assigns the raw bits from one Fixed object to another. The destructor outputs a message when 
   an object is destroyed. The getRawBits method retrieves the current value of the raw bits, while 
   setRawBits allows setting a new value for the raw bits. Each method outputs a message to indicate 
   which operation is being performed, making it easier to trace the flow of execution during debugging. */