/*

- means private
+ means public

top half means fields/variables/attributes
bottom half means methods/functions

----------------------------------
Hero
----------------------------------
- name: std::string // name is a private field of type std::string
- health: int // health is a private field of type int
- equippedWeapon: Weapon // equippedWeapon is a private field of type* Weapon
----------------------------------
+ Hero() // constructor
+ getName(): std::string // getName is a method/function that returns std::string
+ setName(std::string): void // setName is a method/function that accepts a single std::string parameter/argument and returns void
+ getHealth(): int
+ setHealth(int): void
+ getEquippedWeapon(): Weapon
+ setEquippedWeapon(Weapon): void
+ toString(): std::string
----------------------------------
*/

#ifndef HERO_HPP
#define HERO_HPP

#include <string>
#include <iostream>

#include "weapon.hpp"

// a class is a blueprint that can be used to build unique individual instances of that blueprint (e.g. a Rue hero, a Bok hero, and a Cal hero)
class Hero {
    private:
        std::string name;
        int health;
        Weapon equippedWeapon;

    public:
        Hero();
        std::string getName();
        void setName(std::string name);
        int getHealth();
        void setHealth(int health);
        Weapon getEquippedWeapon();
        void setEquippedWeapon(Weapon equippedWeapon);

        std::string toString();
};

#endif