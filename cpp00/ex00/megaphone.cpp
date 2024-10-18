/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:48:22 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/16 14:55:25 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void toUpperAndPrint(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char origin = str[i];
        char upper = static_cast<char>(std::toupper(static_cast<unsigned char>(origin)));
        std::cout << upper;
    }
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        for (int i = 1; i < argc; i++) {
            toUpperAndPrint(argv[i]);
        }
        std::cout << std::endl;
    }
}
