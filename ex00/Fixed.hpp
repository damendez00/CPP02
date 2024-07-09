/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:15:22 by damendez          #+#    #+#             */
/*   Updated: 2024/07/09 16:39:47 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _fixed;
        static const int    _fractionalBits = 8;

    public:
        Fixed(); // Default constructor
        Fixed( const Fixed &rhs ); // Copy constructor
        Fixed& operator=( const Fixed &rhs ); // Assignment operator
        ~Fixed(); // destructor

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif