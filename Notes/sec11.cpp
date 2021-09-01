#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "1.\tSelect Hero." << endl;
    cout << "2.\tCustomize Hero." << endl;
    cout << "3.\tChange Pet." << endl;
    cout << "4.\tCustomize Pet." << endl;
    cout << "5.\tDelete Hero." << endl;

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value;

    if (value == 1)
    {
        cout << "Prepare for battle..." << endl;
    }
    else if (value == 2)
    {
        cout << "Select appearence" << endl;
    }
    else if (value == 3)
    {
        cout << "Select pet" << endl;
    }
    else if (value == 4)
    {
        cout << "Select pet appearence" << endl;
    }
    else if (value == 5)
    {
        cout << "Are you sure?" << endl;
    }
    else
    {
        cout << "Invalid selection." << endl;
    }

    return 0;
}