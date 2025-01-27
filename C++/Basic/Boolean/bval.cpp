#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //declare the variables
    int x, y;

    //user will input the desired amount of numbers
    cout << "Number amount comparison" << endl;
    cout << "input x amount: ";
    cin >> x;
    cout << "input y amount: ";
    cin >> y;

    cout << endl;
    cout << "is x greater than y? " << (x == y) << "\n";

    //else if for deciding whether x is smaller, equal, or greater than y
    if(x < y)
        cout << "x is smaller than y" << "\n";
    else(x > y);
        cout << "x is greater than y" << "\n";
    //if it returns 0, it will state the else
    //if it returns 1, it will state the if
    
    //finish execution
    return 0;
};