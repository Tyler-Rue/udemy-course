#include <iostream>

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat created." << std::endl;
}

std::string Cat::getName()
{
    return this->name;
}

void Cat::setName(std::string name)
{
    this->name = name;
}
