//function parameters

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

void process_selection(int option)
{
    switch (option)
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
}

int main() //main clean af again
{

    show_menu();
    int selection = get_input(); //storing copy of returned value here
    process_selection(selection);


    return 0;
}