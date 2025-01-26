#include <iostream>
using namespace std;

int main(){
    //declare variables
    int x, y;
    int sum;

    //getting variables value
    cout << "Type a number: ";
    cin >> x;

    cout << "Type another number: ";
    cin >> y;
    cout << "================================" << "\n";

    sum = x + y;
    cout << "Total sum of the two number: " << sum << "\n";

    //return to 0 when finished
    return 0;

    //both operator cin and cout belongs to <iostream> library
};