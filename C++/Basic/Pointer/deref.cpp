#include <iostream>
#include <string>
using namespace std;

int main() {
    string car = "Stratos";
    string* ptr = &car;

    //Reference
    cout << ptr << endl;

    //Dereference
    cout << *ptr << endl;

    return 0;
};