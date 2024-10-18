/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:49:33 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/17 17:26:52 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

PhoneBook::PhoneBook() : i(0) {}

void PhoneBook::addContact() {
    if (i == 8) {
        i = 0;
    }
    
    std::string input0;
    std::cout << "firstName: ";
    std::getline(std::cin, input0);
    if (std::cin.eof()) {
        std::clearerr(stdin);
        std::cin.clear();
        std::cout << "warning: EOF reached" << std::endl;
        return ;
    }
    if (input0.empty()) {
        std::cout << "warning: empty input" << std::endl;
        return ;
    }
    
    std::string input1;
    std::cout << "lastName: ";
    std::getline(std::cin, input1);
    if (std::cin.eof()) {
        std::clearerr(stdin);
        std::cin.clear();
        std::cout << "warning: EOF reached" << std::endl;
        return ;
    }
    if (input1.empty()) {
        std::cout << "warning: empty input" << std::endl;
        return ;
    }

    std::string input2;
    std::cout << "nickName: ";
    std::getline(std::cin, input2);
    if (std::cin.eof()) {
        std::clearerr(stdin);
        std::cin.clear();
        std::cout << "warning: EOF reached" << std::endl;
        return ;
    }
    if (input2.empty()) {
        std::cout << "warning: empty input" << std::endl;
        return ;
    }

    std::string input3;
    std::cout << "phoneNumber: ";
    std::getline(std::cin, input3);
    if (std::cin.eof()) {
        std::clearerr(stdin);
        std::cin.clear();
        std::cout << "warning: EOF reached" << std::endl;
        return ;
    }
    if (input3.empty()) {
        std::cout << "warning: empty input" << std::endl;
        return ;
    }
    
    std::string input4;
    std::cout << "darkestSecret: ";
    std::getline(std::cin, input4);
    if (std::cin.eof()) {
        std::clearerr(stdin);
        std::cin.clear();
        std::cout << "warning: EOF reached" << std::endl;
        return ;
    }
    if (input4.empty()) {
        std::cout << "warning: empty input" << std::endl;
        return ;
    }
    contactList[i].setData(input0, 0);
    contactList[i].setData(input1, 1);
    contactList[i].setData(input2, 2);
    contactList[i].setData(input3, 3);
    contactList[i].setData(input4, 4);
    i++;
}

void PhoneBook::printList(int i) {
    std::cout << "         " << i;
    std::cout << "|";

    int len = contactList[i].getData("firstName").length();
    std::string info = contactList[i].getData("firstName");
    if (len <= 10) {
        std::cout << std::setw(10) << std::right << info;
    } else {
        std::cout << info.substr(0, 9) << ".";
    }
    std::cout << "|";

    len = contactList[i].getData("lastName").length();
    info = contactList[i].getData("lastName");
    if (len <= 10) {
        std::cout << std::setw(10) << std::right << info;
    } else {
        std::cout << info.substr(0, 9) << ".";
    }
    std::cout << "|";

    len = contactList[i].getData("nickName").length();
    info = contactList[i].getData("nickName");
    if (len <= 10) {
        std::cout << std::setw(10) << std::right << info;
    } else {
        std::cout << info.substr(0, 9) << ".";
    }
    std::cout << std::endl;
}

bool PhoneBook::isNumber(const std::string& str) {
    for (std::size_t i = 0; i < str.length(); ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void PhoneBook::searchContact() {

    int cnt = 0;
    for (int i = 0; i < 8; i++){
        if (!contactList[i].getData("firstName").empty() && !contactList[i].getData("lastName").empty() &&\
            !contactList[i].getData("nickName").empty() && !contactList[i].getData("phoneNumber").empty() &&\
            !contactList[i].getData("darkestSecret").empty()) {
                printList(i);
                cnt++;
            }
    }
    if (cnt == 0) {
        std::cout << "warning: Phonebook is empty" << std::endl;
        return ;
    }
    
    std::string input;
    int i;
   while (true) {
        std::cout << "What do you want to find?" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof()) {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << "warning: EOF reached." << std::endl;
            continue;
        }
        if (input.empty()) {
            std::cout << "warning: empty input" << std::endl;
            continue;
        }
        if (isNumber(input)) {
            i = std::atoi(input.c_str());
        } else {
            std::cout << "warning: Please enter a number." << std::endl;
            continue;
        }
        if (0 <= i && i <= 7) {
             if (contactList[i].getData("firstName").empty() && contactList[i].getData("lastName").empty() &&\
                 contactList[i].getData("nickName").empty() && contactList[i].getData("phoneNumber").empty() &&\
                contactList[i].getData("darkestSecret").empty()) {
                        std::cout << "warning: This index is empty, try another index." << std::endl;
                        continue;
                    } else
                        break;
        } else {
            std::cout << "warning: Please enter a number between 0 and 7." << std::endl;
        }
    }

    std::cout << "first name: " << contactList[i].getData("firstName") << std::endl;
    std::cout << "last name: " << contactList[i].getData("lastName") << std::endl;
    std::cout << "nickname: " << contactList[i].getData("nickName") << std::endl;
    std::cout << "phone number: " << contactList[i].getData("phoneNumber") << std::endl;
    std::cout << "darkest secret: " << contactList[i].getData("darkestSecret") << std::endl;
}
