#include "hero.hpp"

Hero::Hero() {
    this->name = "unassigned";
    this->health = 100;
}

std::string Hero::getName() {
    return this->name;
}

void Hero::setName(std::string name) {
    this->name = name;
}

int Hero::getHealth() {
    return this->health;
}

// setters are useful for pairing conditional functionality with assignment of a field
void Hero::setHealth(int health) {

    if (health >= 1 && health <= 100) {
        this->health = health;
    } 
    else {
        std::cout << "Invalid health!" << std::endl;
    }
}

// we are allowed to return a class in the same way we can return a simple data type like an int
Weapon Hero::getEquippedWeapon() {
    return this->equippedWeapon;
}

// similarily, we can also pass in a class as a parameter in the same way we can pass in a simple data type like an int
void Hero::setEquippedWeapon(Weapon equippedWeapon) {
    this->equippedWeapon = equippedWeapon;
}

std::string Hero::toString() {
    return "\nName: " + getName() + "\nHealth: " + std::to_string(getHealth());
}