/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:24:41 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:24:42 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

int main() {

    std::string variable = "HI THIS IS BRAIN";
    std::string* stringPTR = &variable;
    std::string& stringREF = variable;

    std::cout << "address of string variable: " << &variable << std::endl;
    std::cout << "address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "address held by stringREF: " << &stringREF << std::endl;

    std::cout << "value of the string variable: " << variable << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}
