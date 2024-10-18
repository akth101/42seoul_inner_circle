/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:23:03 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:43:45 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main() {

    std::cout << "create 3 zombies" << std::endl;

    Zombie *zombies = zombieHorde(3, "seongjko");

    zombies[0].announce();
    zombies[1].announce();
    zombies[2].announce();

    delete[] zombies;

    return (0);
}
