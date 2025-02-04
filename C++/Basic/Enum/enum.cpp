#include <iostream>
using namespace std;

int main() {
    enum Level{     //setting up enum items
        LOW = 23,   //value can be modified
        MEDIUM,
        HIGH
    };
    
    enum Level myNum = MEDIUM;      //enum variable
    cout << myNum << "\n";          //it will come out as the value assigned to the enum items
    return 0;
};
