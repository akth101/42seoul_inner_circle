/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:23:49 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:30:56 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

int main() {

    std::cout << "[test newZombie]" << std::endl;
    Zombie *zombie = newZombie("seongjko");
    zombie->announce();
    delete zombie;

    std::cout << std::endl;

    std::cout << "[test randomChump]" << std::endl;
    randomChump("seongko");
    
    return (0);
}
