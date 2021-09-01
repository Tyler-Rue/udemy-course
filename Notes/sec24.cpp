// return values from functions
#include <iostream>
using namespace std;

void show_menu()
{
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
}

int get_input()
{
    cout << "Enter selection: " << flush;

    int input;
    cin >> input;

    return input; //returning value of input here
}

int main()
{

    show_menu();
    int selection = get_input(); //storing copy of returned value here

    switch (selection)
    {
    case 1:
        cout << "Searching ..." << endl;
        break;
    case 2:
        cout << "Viewing ..." << endl;
        break;
    case 3:
        cout << "Quitting ..." << endl;
        break;
    default:
        cout << "Please select an item from the menu." << endl;
    }

    return 0;
}
