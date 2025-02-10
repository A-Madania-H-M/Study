#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

int main(){
    Car aObj1("BMW", "M3", 2015);
    Car aObj2("Aston Martin", "Vanquish", 2018);

    cout << aObj1.brand << " " << aObj1.model << " " << aObj1.year << endl;
    cout << aObj2.brand << " " << aObj2.model << " " << aObj2.year << endl;
    return 0;

};