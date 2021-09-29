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

    Animal *pCat1 = new Animal(); // new manually allocates heap memory
    pCat1->setName("Freddy"); // use ->setName; .setName can't be used on a pointer only an object; . takes precedence over *
    pCat1->speak();
    delete pCat1; // must call delete after new is called to deallocate memory

    cout << sizeof(pCat1) << endl;

    return 0;
}