#include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Sedan", "Coupe", "Sport", "SUV", "Wagon"};
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << "\n"; 
    }
    return 0;
};