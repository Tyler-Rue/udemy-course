#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal()
    {
        cout << "Animal created." << endl;
    }

    Animal(const Animal &other) : name(other.name)
    {
        cout << "Animal created by copying." << endl;
    }
    ~Animal()
    {
        cout << "Deconstructor called" << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void speak() const
    {
        cout << "My name is: " << name << endl;
    }
};

int main()
{

    Animal *pAnimal = new Animal[10]; // creates 10 new objects in class Animal

    pAnimal[5].setName("George"); // modifies 6th object
    pAnimal[5].speak();

    delete[] pAnimal; // must use [] after delete to free up all associated memory

    char *pMem = new char[1000]; // allocated 1000 bytes as char is a single byte
    delete[] pMem;

    char c = 'a';
    c++;
    string name(5, c); // 5 sets number of variable c that will be output (bbbbb)
    cout << name << endl;

    return 0;
}