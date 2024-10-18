/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:05:20 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/16 18:08:13 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->fixedPointValue = other.fixedPointValue;
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int intValue) {
    std::cout << "Int constructor called" << std::endl;
    fixedPointValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "Float constructor called" << std::endl;
    fixedPointValue = static_cast<int>(roundf(floatValue * (1 << fractionalBits)));
}

float Fixed::toFloat(void) const {
    return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
    return fixedPointValue >> fractionalBits;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    fixedPointValue = raw;
}

bool Fixed::operator>(Fixed const &ref) const {
	return (this->getRawBits() > ref.getRawBits());
}

bool Fixed::operator<(Fixed const &ref) const {
    return (this->getRawBits() < ref.getRawBits());
}

bool Fixed::operator>=(Fixed const &ref) const {
	return (this->getRawBits() >= ref.getRawBits());
}

bool Fixed::operator<=(Fixed const &ref) const {
    return (this->getRawBits() <= ref.getRawBits());
}

bool Fixed::operator==(Fixed const &ref) const {
    return (this->getRawBits() == ref.getRawBits());
}

bool Fixed::operator!=(Fixed const &ref) const {
    return (this->getRawBits() != ref.getRawBits());
}

Fixed Fixed::operator+(Fixed const &ref) const {
    Fixed newObj(this->toFloat() + ref.toFloat());
    return (newObj);
}

Fixed Fixed::operator-(Fixed const &ref) const {
    Fixed newObj(this->toFloat() - ref.toFloat());
    return (newObj);
}

Fixed Fixed::operator*(Fixed const &ref) const {
    Fixed newObj(this->toFloat() * ref.toFloat());
    return (newObj);
}

Fixed Fixed::operator/(Fixed const &ref) const {
    Fixed newObj(this->toFloat() / ref.toFloat());
    return (newObj);
}

Fixed&	Fixed::operator++(void)
{
	this->fixedPointValue++;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	const Fixed	newObj(*this);

	this->fixedPointValue++;
	return (newObj);
}

Fixed&	Fixed::operator--(void)
{
	this->fixedPointValue--;
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	const Fixed	newObj(*this);

	this->fixedPointValue--;
	return (newObj);
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2) {
    if (ref1 <= ref2)
		return (ref1);
	else
		return (ref2);
}

const Fixed &Fixed::min(Fixed const &ref1, Fixed const &ref2) {
    if (ref1 <= ref2)
		return (ref1);
	else
		return (ref2);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2) {
    if (ref1 <= ref2)
		return (ref2);
	else
		return (ref1);
}

const Fixed &Fixed::max(Fixed const &ref1, Fixed const &ref2) {
    if (ref1 <= ref2)
		return (ref2);
	else
		return (ref1);
}
