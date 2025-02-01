#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "Audi", "Maserati", "Nissan"};   //Array store elements based on index order
    cout << "The car on this index is a ";                      //it starts from 0 not 1
    cout << cars[2] << "\n";                                    //Here it will print the third index
    cars[2] = "Lancia";
    cout << "Now the car on this index is a ";
    cout << cars[2] << '\n';
    return 0;
};