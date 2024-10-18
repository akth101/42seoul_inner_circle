/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:22:49 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:34:06 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() : name("default") {
        std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::Zombie(const std::string& n) : name(n) {}


void Zombie::announce () {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameSetter(const std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << name << " was destructed successfully" << std::endl;
}
