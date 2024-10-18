
#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

const std::string *Brain::getIdeas(void) const {
    return (ideas);
}

void Brain::setIdeas(std::string idea, int n) {
    for (int i = 0; i < n; i++)
    {
        ideas[i] = idea;
    }
    return ;
}
