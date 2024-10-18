/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:49:21 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/16 13:50:08 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    int i;
    Contact contactList[8];

    bool isNumber(const std::string& str);
    void printList(int i);

public:
    PhoneBook();
    void addContact();
    void searchContact();
};

#endif
