#include <iostream>
using namespace std;

int main() {
    //declare variable
    int i = 0;
    while (i < 10)          //break and continue can be used in while loop
    {
        cout << i << '\n';
        i++;
        if (i == 4) {
            break;          //stopping if i equals to 4
        }
    }
    return 0;
};