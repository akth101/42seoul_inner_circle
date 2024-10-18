/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <seongjko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:26:29 by seongjko          #+#    #+#             */
/*   Updated: 2024/08/07 19:20:19 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FileReplacer.hpp"
#include <fstream>

FileReplacer::FileReplacer(
    const std::string &filename,
    const std::string &s1,
    const std::string &s2
    ) : filename(filename), s1(s1), s2(s2) {}

void FileReplacer::process () {
    std::ifstream inputFile(filename.c_str());
        if (!inputFile) {
            std::cerr << "Error: Unable to open file " << filename << std::endl;
            return;
        }

        if (inputFile.peek() == std::ifstream::traits_type::eof()) {
            std::cerr << "Error: The file is empty" << std::endl;
            inputFile.close();
            return;
        }

        std::string outputFilename = filename + ".replace";
        std::ofstream outputFile(outputFilename.c_str());
        if (!outputFile) {
            std::cerr << "Error: Unable to create file " << outputFilename << std::endl;
            inputFile.close();
            return;
        }

        std::string line;
        while (std::getline(inputFile, line)) {
            std::string newLine;
            size_t pos = 0;
            size_t found;
            while ((found = line.find(s1, pos)) != std::string::npos) {
                newLine.append(line, pos, found - pos);
                newLine.append(s2);
                pos = found + s1.length();
            }
            newLine.append(line, pos, line.length() - pos);
            outputFile << newLine;
            if (inputFile.eof())
                break;
            outputFile << std::endl;
        }
        inputFile.close();
        outputFile.close();
}
