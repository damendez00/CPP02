/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:44:14 by damendez          #+#    #+#             */
/*   Updated: 2024/07/10 14:27:03 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	std::cout << "[ SUBJECT TESTS ]" << std::endl;
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c (60);
	Fixed		d( 10.3f );
	const Fixed	e( 7.3f );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << std::endl << "[ POST/PRE INCREMENT TESTS ]" << std::endl;	
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << std::endl << "[ MAX/MIN TESTS ]" << std::endl;
	std::cout << "max( a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << "min( a, b ): " << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl << "[ ARITHMETIC OPERATORS ]" << std::endl;
	c = 60;
	a = 20;
	std::cout << "a + b = " << a+b << std::endl;
	std::cout << "b + c = " << b+c << std::endl;
	std::cout << "c / b = " << c/b << std::endl;
	std::cout << "c / a = " << c/a << std::endl;
	std::cout << "a * b = " << a*b << std::endl;

	std::cout << std::endl << "[ COMPARISON OPERATORS ]" << std::endl;
	std::cout << "a > b: " << ( a > b ) << std::endl;
	std::cout << "a >= b: " << ( a >= b ) << std::endl;
	std::cout << "a < b: " << ( a < b ) << std::endl;
	std::cout << "a <= b: " << ( a <= b ) << std::endl;
	std::cout << "c > d: " << ( c > d ) << std::endl;
	std::cout << "c >= d: " << ( c >= d ) << std::endl;
	std::cout << "c < d: " << ( c < d ) << std::endl;
	std::cout << "c <= d: " << ( c <= d ) << std::endl;
	std::cout << "c == d: " << ( c == d ) << std::endl;
	std::cout << "c != d: " << ( c != d ) << std::endl;

	return 0;
}