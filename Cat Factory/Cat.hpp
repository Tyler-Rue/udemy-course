#ifndef CAT_HPP_
#define CAT_HPP -

#include <iostream>
#include <string>

class Cat
{
private:
    std::string name;

public:
    Cat();
    Cat(std::string);
    std::string getName();
    void setName(std::string name);
};

#endif