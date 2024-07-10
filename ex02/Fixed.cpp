/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damendez <damendez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:44:09 by damendez          #+#    #+#             */
/*   Updated: 2024/07/10 14:17:50 by damendez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    this->_fixed = 0;
}

Fixed::~Fixed() {
}

Fixed::Fixed( const Fixed& rhs) {
    *this = rhs;
}

Fixed::Fixed( const int num ) {
    this->_fixed = num << _fractionalBits;
}

Fixed::Fixed( const float num ) {
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

// Comparison operators
Fixed& Fixed::operator=( const Fixed& rhs) {
    if (this != &rhs)
        this->_fixed = rhs.getRawBits();
    return (*this);
}

bool    Fixed::operator>( const Fixed& rhs ) const {
    return (this->_fixed > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (this->_fixed < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	return (this->_fixed >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	return (this->_fixed <= rhs.getRawBits());
}

bool	Fixed::operator==( const Fixed &rhs ) const
{
	return ( this->_fixed == rhs.getRawBits() );
}

bool	Fixed::operator!=( const Fixed &rhs ) const
{
	return ( this->_fixed != rhs.getRawBits() );
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

// Increment/decrement operators
Fixed Fixed::operator++(void)
{
	this->_fixed++;//
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed pre(*this);
	this->_fixed++;
	return (pre);
}

Fixed Fixed::operator--(void)
{
	this->_fixed--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed pre(*this);
	this->_fixed--;
	return (pre);
}

const   Fixed& Fixed::min(const Fixed& num1, const Fixed& num2) {
    return (num1 < num2 ? num1 : num2);
}

Fixed&  Fixed::min(Fixed& num1, Fixed& num2) {
    return (num1 < num2 ? num1 : num2);
}

const Fixed&	Fixed::max(const Fixed& num1, const Fixed& num2)
{
	return (num1 > num2 ? num1 : num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	return (num1 > num2 ? num1 : num2);
}

std::ostream&	operator<<( std::ostream& out, Fixed& fixed )
{
	out << fixed.toFloat();
	return (out);
}

std::ostream&	operator<<( std::ostream& out, const Fixed& fixed )
{
	out << fixed.toFloat();
	return (out);
}
