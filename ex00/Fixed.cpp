/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:23:12 by damendez          #+#    #+#             */
/*   Updated: 2024/07/09 16:39:23 by damendez         ###   ########.fr       */
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

int     Fixed::getRawBits( void ) const {
   	std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed);
}

void    Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member called" << std::endl;
    this->_fixed = raw;
}