#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {                              //For loop with variable, condition, and operation
        if (i == 4) {                                           //If statement where i equals to 0
            cout << "This for loop has reached 4!" << "\n";     //will print the string
            continue;                                           //and will keep looping until condition
        }
        cout << i << "\n";
    }
    return 0;
};