/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:22:30 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:22:37 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _rawBits;
    static const int _fractionalBits = 8;

public:
    Fixed();                            // Default constructor
    Fixed(const int value);            // Int constructor
    Fixed(const float value);          // Float constructor
    Fixed(const Fixed& other);         // Copy constructor
    Fixed& operator=(const Fixed& other); // Assignment
    ~Fixed();                           // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

// Overload for << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
/* This header file defines the Fixed class, which represents a fixed-point number with a specified number of fractional bits. 
   The class includes constructors for default initialization, integer and float values, a copy constructor, an assignment operator, 
   and a destructor. It provides methods to get and set the raw bits, convert to float and int types, and overloads the << operator 
   for easy output. The static constant _fractionalBits defines the number of bits used for the fractional part of the fixed-point number. */