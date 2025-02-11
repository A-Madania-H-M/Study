#include <iostream>
using namespace std;

//Parent class
class Vehicle{
    public:
        string brand = "Maserati";
        void honk(){
            cout << "Honkk honkkk!\n";
        }
};

//Child class
class Car: public Vehicle{
    public:
        string model = "Levante\n";
};

int main(){
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;

    return 0;
};