#include <iostream>
#include "Cat.hpp"

Cat *catFactory(std::string name)
{
    Cat *cat = new Cat();
    std::cout << "The cat's name is: ";
    cat->setName(name);
    return cat;
}

int main()
{
    Cat *cat = catFactory("Tot");

    std::cout << cat->getName() << std::endl;

    delete cat;

    cat = catFactory("Tina");

    std::cout << cat->getName() << std::endl;

    delete cat;
    return 0;
}