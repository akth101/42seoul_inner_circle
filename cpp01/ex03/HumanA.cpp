/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:24:55 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:24:58 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& weapon) : name(n), weapon(weapon) {}

void HumanA::attack(void) {
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}
