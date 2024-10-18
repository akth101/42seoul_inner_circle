/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:25:42 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:25:43 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string n) : type(n) {}

const std::string& Weapon::getType(void) {
    std::string& typeREF = type;
    return (typeREF);
}

void Weapon::setType(std::string typeName) {
    this->type = typeName;
    return ;
}

Weapon::~Weapon() {}
