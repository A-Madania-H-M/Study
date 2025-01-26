#include <iostream>
using namespace std;

int main(){
    //declare variable for input
    int y1, y2;

    //inputting value to variables
    cout << "Input y1 value! " << "\n";
    cin >> y1;
    cout << "Input y2 value! " << "\n";
    cin >> y2;

    //simple arithmetic operators
    int x1 = y1 + y2;
    int x2 = y1 + x1;
    int x3 = x1 + x2;
    int z1 = x3 * x1;

    //result of arithmetic
    cout << "Simple Arithmetic :D" << "\n";
    cout << "===========================" << "\n";
    cout << "Addition!" << "\n";
    cout << "x1 equation: y1 + y2 = " << x1 << "\n";
    cout << "x2 equation: x1 + y1 = " << x2 << "\n";
    cout << "x3 equation: x1 + x2 = " << x3 << "\n";
    cout << "=========================" << "\n";

    cout << "Multiplication" << "\n";
    cout << "z3 equation: x3 + x1 = " << z1 << "\n";
    return 0;
};