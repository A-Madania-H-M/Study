#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname){
    cout << fname << " Flamma\n";
}

int main() {
    myFunction("Alicia");
    myFunction("May");
    myFunction("Leo");

    return 0;
};