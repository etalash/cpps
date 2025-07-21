/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:19:47 by stalash           #+#    #+#             */
/*   Updated: 2025/07/21 14:19:57 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _rawBits;
    static const int _fractionalBits = 8;

public:
    Fixed();                          // Default constructor
    Fixed(const Fixed& other);       // Copy constructor
    Fixed& operator=(const Fixed& other); // Copy assignment
    ~Fixed();                         // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
