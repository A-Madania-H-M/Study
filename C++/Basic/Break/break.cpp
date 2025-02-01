#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {  //for loop that iterates up to 10
        if (i == 4) {               //if statement i equals to 4
            break;                  //will break or stop the operation
        }
        cout << i << "\n";
    }
    return 0;
};