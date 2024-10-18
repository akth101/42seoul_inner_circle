/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:22:56 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:32:54 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
    private:
       std::string name;

    public:
        Zombie();
        Zombie(const std::string& n);
        void announce(void);
        void nameSetter(const std::string name);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
