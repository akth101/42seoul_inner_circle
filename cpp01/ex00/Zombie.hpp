/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:24:24 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:24:25 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>


class Zombie {
    private:
       std::string name;

    public:
        Zombie(const std::string& n);
        void announce(void);
        ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
