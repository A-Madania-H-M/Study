#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "Lexus", "BMW"};
    for (string car:cars) {
        cout << car << "\n";
    }
    cout << endl;
    cars.push_back("Tesla");
    for (string car:cars) {
        cout << car << "\n";
    }
    return 0;
};