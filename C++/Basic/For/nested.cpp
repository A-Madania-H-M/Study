#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 2; i++) {          //Outside loop goes after, then goes last
        cout << "Outer Loop" << "\n";       //Outside loop will decide how much more the inside loop iterate
        
        for (int j = 1; j <=3 ; ++j) {      //Inside loop goes first, then after the outside loop
            cout << "Inner Loop" << "\n";   //Inside loop works like any loop
        }
    }   
return 0;
};