#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
};

int main(){
    Car carobj;
    carobj.brand = "Lancia";
    carobj.model = "Stratos";
    carobj.year = 2000;

    Car carobj1;
    carobj1.brand = "Lexus";
    carobj1.model = "LFA";
    carobj1.year = 2016;

    cout << "Unique cars over the year!" << endl;
    cout << "## ================================ ##" << endl;
    cout << carobj.brand << " " << carobj.model << " " << carobj.year << endl;
    cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << endl;

    return 0;
};