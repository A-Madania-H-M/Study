#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Indonesia") {
    cout << country << endl;

}

int main() {
    myFunction("Sweden");
    myFunction("Kongo");
    myFunction();
    myFunction("Russia");

    return 0;
};