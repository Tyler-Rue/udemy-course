#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal() { cout << "Animal created." << endl; }; // constructor creating Animal
    Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl;}; 
    void setName(string name) { this->name = name; };
    void speak() const { cout << "My name is: " << name << endl; }
};

int main()
{

    Animal animal1;

    animal1.setName("Freddy");

    Animal animal2 = animal1; // sets field of animal1 to animal2, calls = to call copy construcor
    animal2.speak();
    animal2.setName("Bob");


    animal1.speak();
    animal2.speak();
    
    Animal animal3(animal1); // calls copy constructor directly
    animal3.speak();

    return 0;
}