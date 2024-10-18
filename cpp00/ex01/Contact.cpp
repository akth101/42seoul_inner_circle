/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:48:43 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/17 16:59:00 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() 
    : firstName(""),
      lastName(""),
      nickName(""),
      phoneNumber(""),
      darkestSecret("") {}

std::string Contact::getData(const std::string key) {
    if (key == "firstName") {
        return firstName;
    } else if (key == "lastName") {
        return lastName;
    } else if (key == "nickName") {
        return nickName;
    } else if (key == "phoneNumber") {
        return phoneNumber;
    } else if (key == "darkestSecret") {
        return darkestSecret;
    }
    return (NULL);
}

void Contact::setData(const std::string& key, int i) {
    if (i == 0) {
        firstName = key;
    } else if (i == 1) {
        lastName = key;
    } else if (i == 2) {
        nickName = key;
    } else if (i == 3) {
        phoneNumber = key;
    } else if (i == 4) {
        darkestSecret = key;
    }
}
