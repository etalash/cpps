/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:25:56 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:28:02 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Comparison operators
bool Fixed::operator>(const Fixed& rhs) const { return _rawBits > rhs._rawBits; }
bool Fixed::operator<(const Fixed& rhs) const { return _rawBits < rhs._rawBits; }
bool Fixed::operator>=(const Fixed& rhs) const { return _rawBits >= rhs._rawBits; }
bool Fixed::operator<=(const Fixed& rhs) const { return _rawBits <= rhs._rawBits; }
bool Fixed::operator==(const Fixed& rhs) const { return _rawBits == rhs._rawBits; }
bool Fixed::operator!=(const Fixed& rhs) const { return _rawBits != rhs._rawBits; }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}
Fixed Fixed::operator-(const Fixed& rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator*(const Fixed& rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator/(const Fixed& rhs) const {
    if (rhs._rawBits == 0) {
        std::cerr << "Error: division by zero" << std::endl;
        return Fixed();
    }
    return Fixed(this->toFloat() / rhs.toFloat());
}

// Increment / Decrement
Fixed& Fixed::operator++() {
    _rawBits++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _rawBits++;
    return temp;
}

Fixed& Fixed::operator--() {
    _rawBits--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _rawBits--;
    return temp;
}

// Min / Max
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}
