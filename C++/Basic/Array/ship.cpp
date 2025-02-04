#include <iostream>
using namespace std;

int main () {
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    int hits = 0;
    int playerTurns= 0;

    while (hits < 4){
        int row, column;
        cout << "Select coordinates!\n ";
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;
        cout << "CHoose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;
            cout << "Hit! " << (4-hits) << " left.\n\n";
        }   else {
            cout << "Miss\n\n";
        }
        playerTurns++;
    }
    cout << "Victory\n";
    cout << "You won in " << playerTurns << " turns!\n";
    return 0;
};