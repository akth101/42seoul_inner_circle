/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:26:41 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/04 16:30:57 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FileReplacer.hpp"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (filename.empty() || s1.empty()) {
        std::cerr << "Error: you entered empty string" << std::endl;
        return 1;
    }

    FileReplacer processor(filename, s1, s2);
    processor.process();

    return 0;
}
