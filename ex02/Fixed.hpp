/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:44:11 by damendez          #+#    #+#             */
/*   Updated: 2024/07/10 14:15:49 by damendez         ###   ########.fr       */
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

        // Comparison operators
		bool	operator>( const Fixed& rhs ) const;
		bool	operator<( const Fixed& rhs ) const;
		bool	operator>=( const Fixed& rhs ) const;
		bool	operator<=( const Fixed& rhs ) const;
		bool	operator==( const Fixed& rhs ) const;
		bool	operator!=( const Fixed& rhs ) const;

        // Arithmetic operators
        Fixed	operator+( const Fixed& rhs ) const;
		Fixed	operator-( const Fixed& rhs ) const;
		Fixed	operator*( const Fixed& rhs ) const;
		Fixed	operator/( const Fixed& rhs ) const;

        // Increment/decrement operators
        Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

        // Overloaded member functions
        static Fixed&			min(Fixed& num1, Fixed& num2);
		static const Fixed&     min(const Fixed& num1, const Fixed& num2);
		static Fixed&			max(Fixed& num1, Fixed& num2);
		static const Fixed&	    max(const Fixed& num1, const Fixed& num2);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat ( void ) const;
        int     toInt ( void ) const;
};

std::ostream&	operator<<( std::ostream& out, Fixed& fixed );
std::ostream&	operator<<( std::ostream& out, const Fixed& fixed );

#endif