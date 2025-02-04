#include <iostream>
using namespace std;

int main() {
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2;

    myCar1.brand = "Lancia";
    myCar1.model = "Stratos";
    myCar1.year = 2000;

    myCar2.brand = "Nissan";
    myCar2.model = "Silvia";
    myCar2.year = 1994;
    
    cout << "Rare cars from the golden age\n";
    cout << "================================\n";
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    return 0;
};