/*
----------------------------------
Weapon
----------------------------------
- name: std::string
- strength: int
----------------------------------
+ Weapon()
+ getName(): std::string
+ setName(std::string): void
+ getStrength(): int
+ setStrength(int): void
+ toString: std::string
----------------------------------
*/

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string name;
        int strength;

    public:
        Weapon();
        std::string getName();
        void setName(std::string name);
        int getStrength();
        void setStrength(int strength);

        std::string toString();
};

#endif