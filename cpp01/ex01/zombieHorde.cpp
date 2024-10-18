/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:23:25 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:34:38 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        horde[i].nameSetter(name);
    }
    
    return horde;
}
