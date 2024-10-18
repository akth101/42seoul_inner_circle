/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:25:05 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:25:06 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(std::string n, Weapon& weapon);
        void attack(void);
        ~HumanA();
};

#endif
