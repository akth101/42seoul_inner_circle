/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:05:25 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/16 18:05:28 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int fixedPointValue;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    Fixed(const int intValue);
    Fixed(const float floatValue);

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits() const;
    void setRawBits(int const raw);

    friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
        out << fixed.toFloat();
        return out;
    }

    bool operator>(Fixed const &ref) const;
    bool operator<(Fixed const &ref) const;
    bool operator>=(Fixed const &ref) const;
    bool operator<=(Fixed const &ref) const;
    bool operator==(Fixed const &ref) const;
    bool operator!=(Fixed const &ref) const;

    Fixed operator+(Fixed const &ref) const;
    Fixed operator-(Fixed const &ref) const;
    Fixed operator*(Fixed const &ref) const;
    Fixed operator/(Fixed const &ref) const;

    Fixed	&operator++(void);
    Fixed	&operator--(void);
    const Fixed	operator++(int);
    const Fixed	operator--(int);

    static Fixed &min(Fixed &ref1, Fixed &ref2);
    static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);
    static Fixed &max(Fixed &ref1, Fixed &ref2);
    static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);


};

#endif
