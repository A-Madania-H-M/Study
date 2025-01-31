#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //declare variable
    int total;

    //variable input
    cout << "How much is your total groceries? ";
    cin >> total;


    //if else statement
    //if else used when the first condition is false.
    //if else gives another condition.
    if (total < 100) {
        cout << "Your total is below 100!\n";
    } else if (total < 200) {
        cout << "Your total is below 200\n";
    } else {
        cout << "Your total is beyond 200!\n";
    }
    return 0;
};