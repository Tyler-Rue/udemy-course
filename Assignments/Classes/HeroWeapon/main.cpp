#include <iostream>

#include "hero.hpp"
#include "weapon.hpp"

int main() {

    Hero rue; // created a Hero object titled 'rue'
    rue.setName("Ruebenheimer III"); 
    rue.setHealth(100);

    Weapon weapon1;
    weapon1.setName("Battleaxe");
    weapon1.setStrength(50);

    rue.setEquippedWeapon(weapon1);

    // equivalent of std::cout << weapon1
    // std::cout << rue.getEquippedWeapon() << "\n";

    // a function becomes what it returns after the function is called
    std::cout << rue.toString() << "\n"; // toString coming from the Hero class
    std::cout << rue.getEquippedWeapon().toString() << "\n"; // toString coming from the Weapon class






    // std::cout << weapon1.toString() << std::endl;

    // Weapon weapon2; 
    // Weapon weapon3; 

    // weapon2.setName("2H Sword");
    // weapon2.setStrength(75);
    // std::cout << weapon2.toString() << std::endl;

    // weapon3.setName("Laser Pointer");
    // weapon3.setStrength(0);
    // std::cout << weapon3.toString() << std::endl;

    // Hero bok; // created a Hero object titled 'bok'
    // bok.setName("Boktavius");
    // std::cout << "Hero #2 name: " << bok.getName() << "\n"; 
    // bok.setHealth(1);
    // std::cout << "Hero #2 health: " << bok.getHealth() << "\n";

    // Hero cal; // created a Hero object titled 'cal'
    // cal.setName("Cowvin");
    // std::cout << "Hero #3 name: " << cal.getName() << "\n"; 
    // cal.setHealth(99);
    // std::cout << "Hero #3 health: " << cal.getHealth() << "\n";

    return 0;
}