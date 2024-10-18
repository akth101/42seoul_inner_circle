/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:49:08 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/17 16:17:49 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdio>

int main() {

    PhoneBook phoneBook;
    std::string cmd;

    while (true) {
        std::cout << "select and execute one of the commands " << std::endl;
        std::cout << "1. ADD" << std::endl;
        std::cout << "2. SEARCH" << std::endl;
        std::cout << "3. EXIT" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof()) {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << "warning: EOF reached" << std::endl;
            continue;
        }
        if (cmd.empty()) {
            std::cout << "warning: empty input" << std::endl;
            continue;
        }
        if (cmd == "ADD") {
            phoneBook.addContact();
        } else if (cmd == "SEARCH") {
            phoneBook.searchContact();
        } else if (cmd == "EXIT") {
            break;
        } else {
            std::cout << "warning: please enter valid command" << std::endl;
        }
    }
    return (0);
}
