/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:25:51 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:25:52 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string type;

    public:
        Weapon();    
        Weapon(std::string typeName);
        const std::string& getType();
        void         setType(std::string typeName);
        ~Weapon();
};

#endif
