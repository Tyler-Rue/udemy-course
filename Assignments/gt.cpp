#include <iostream>
using namespace std;

int main()
{

    char grid[4][4] = {
        {'_', '_', '_', '_'},
        {'_', '_', '_', '_'},
        {'_', '_', '_', '_'},
        {'X', '_', '_', '_'},
    };

    int player_i = 3;
    int player_j = 0;

    char movement = '*';
    int moves = 0;

    while (movement != 'q')
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "|" << flush;

            for (int j = 0; j < 4; j++)
            {
                cout << grid[i][j] << "|" << flush;
            }
            cout << endl;
        }
        cout << "\nEnter a direction to move (w, a, s, d): ";
        cin >> movement;

        if (movement == 'w' && player_i - 1 >= 0)
        {
            grid[player_i][player_j] = '_';
            grid[player_i - 1][player_j] = 'X';
            player_i = player_i - 1;
            moves++;
        }
        else if (movement == 'a' && player_j - 1 >= 0)
        {
            grid[player_i][player_j] = '_';
            grid[player_i][player_j - 1] = 'X';
            player_j = player_j - 1;
            moves++;
        }
        else if (movement == 's' && player_i + 1 < 4)
        {
            grid[player_i][player_j] = '_';
            grid[player_i + 1][player_j] = 'X';
            player_i = player_i + 1;
            moves++;
        }
        else if (movement == 'd' && player_j + 1 < 4)
        {
            grid[player_i][player_j] = '_';
            grid[player_i][player_j + 1] = 'X';
            player_j = player_j + 1;
            moves++;
        }
        else if (movement == 'q')
        {
            cout << "\nThanks for playing! You moved " << moves << " times. ";
        }
    }

    return 0;
}