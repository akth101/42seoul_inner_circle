/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:25:19 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:25:20 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string n);
        void setWeapon(Weapon& weapon);
        void attack(void);
        ~HumanB();
};

#endif
