/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:27:13 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/07 19:29:07 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <map>

class Harl {
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};
