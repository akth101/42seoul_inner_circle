/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:26:34 by seongjko          #+#    #+#             */
/*   Updated: 2024/07/29 00:26:37 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

class FileReplacer {
    private:
        std::string filename;
        std::string s1;
        std::string s2;

    public:
    FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
    void process();
};
