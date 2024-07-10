/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:27:20 by damendez          #+#    #+#             */
/*   Updated: 2024/07/10 13:10:42 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

        Fixed( const int num );
        Fixed( const float num );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat ( void ) const;
        int     toInt ( void ) const;
};

std::ostream&	operator<<( std::ostream& out, const Fixed& fixed );

#endif