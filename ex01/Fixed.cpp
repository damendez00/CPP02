/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:27:22 by damendez          #+#    #+#             */
/*   Updated: 2024/07/10 13:20:12 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& rhs) {
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed& Fixed::operator=( const Fixed& rhs) {
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &rhs)
        this->_fixed = rhs.getRawBits();
    return (*this);
}

Fixed::Fixed( const int num ) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixed = num << _fractionalBits;
}

Fixed::Fixed( const float num ) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixed = roundf(num * (1 << this->_fractionalBits));
}

int     Fixed::getRawBits( void ) const {
   	//std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed);
}

void    Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member called" << std::endl;
    this->_fixed = raw;
}

float   Fixed::toFloat() const {
    return (this->_fixed / (float)(1 << _fractionalBits));
}

int     Fixed::toInt( void ) const {
    return (this->_fixed >> _fractionalBits);
}

std::ostream& operator<<( std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();
    return (out);
}