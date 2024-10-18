/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:25:12 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/07 17:42:47 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack(void) {
    if (weapon == NULL) {
        std::cout << "error: HumanB has no weapon" << std::endl;
        return ;
    }
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << weapon->getType() << std::endl;
}

HumanB::~HumanB() {}
