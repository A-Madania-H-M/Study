#include <iostream>
using namespace std;

int main () {
    string cars[5] = {"Mazda", "Aston Martin", "Mercedes-Benz", "Skoda", "Saab"};
    for (string car:cars) {     //This array uses for loop to  
        cout << car << "\n";    //iterate each elements inside array
    }
    return 0;
};