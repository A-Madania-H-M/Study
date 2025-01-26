#include <iostream>
#include <string>
using namespace std;

int main(){
    string greeting1 = "Hello!";    // Regular String
    char greeting2[] = "Hello!";    // C-Style String

    // C-Style string have access to functions from
    // C standard library.

    cout << greeting1 << "\n";
    cout << greeting2 << "\n";
    return 0;
};