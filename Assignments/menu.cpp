// Menu system

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int value;

    while (value != 4)
    {
        cout << "\n1. Play" << endl;
        cout << "2. Load" << endl;
        cout << "3. Settings" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your selection > " << flush;
        cin >> value;
        if (value == 1) // Play
        {
            cout << "good luck, warrior.. you're going to need it" << endl;
        }
        else if (value == 2) // Load
        {
            cout << "Loading..." << endl;
        }
        else if (value == 3) // Settings
        {

            value = 0;
            while (value != 3)
            {
                cout << "\n1. Text display speed" << endl;
                cout << "2. Language filter" << endl;
                cout << "3. Return to main menu" << endl;
                cout << "Enter your selection > " << flush;
                cin >> value;

                if (value == 1) // Text display speed
                {
                    cout << "Such a boomer" << endl;
                }
                else if (value == 2) // Language filter
                {
                    cout << "Don't be a pussy" << endl;
                }
            }
        }
        else if (value == 4) // Exit
        {
            cout << "Goodbye" << endl;
        }
    }

    return 0;
}
