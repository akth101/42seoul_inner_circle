
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain(void);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
        const std::string* getIdeas(void) const;
	    void setIdeas(std::string idea, int n);
};

#endif