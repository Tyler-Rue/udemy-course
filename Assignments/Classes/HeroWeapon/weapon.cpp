#include "weapon.hpp"

// constructors are called automatically when a object is made from a class and they get called before any other function
Weapon::Weapon() {
    this->name = "unassigned";
    this->strength = 0;
}

std::string Weapon::getName() {
    return this->name;
}

void Weapon::setName(std::string name) {
    this->name = name;
}

int Weapon::getStrength() {
    return this->strength;
}

void Weapon::setStrength(int strength) {
    this->strength = strength;
}

std::string Weapon::toString() {
    return "\nName: " + getName() + "\nStrength: " + std::to_string(getStrength());
}
