/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:27:07 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/07 19:28:36 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
        std::cout << "[DEBUG]This is a debug message with contextual information." << std::endl;
    }

void Harl::info() {
        std::cout << "[INFO]This is an informational message with extensive details." << std::endl;
    }

void Harl::warning() {
        std::cout << "[WARNING]This is a warning message indicating a potential issue." << std::endl;
    }

void Harl::error() {
        std::cout << "[ERROR]This is an error message indicating an unrecoverable issue." << std::endl;
    }

void Harl::complain(std::string level) {

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*HarlFunc[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*HarlFunc[i])();
            return ;
        }
    }
    std::cout << "[Invalid]This is a invalid level." << std::endl;
    return ;
}
