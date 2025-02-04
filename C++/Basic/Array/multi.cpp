#include <iostream>
using namespace std;

int main() {
    string array[2][5] = {              //this is a multi dimension array
        {"1", "2", "3", "4", "5"},      //this array has 2 arrays with 5 elements on each
        {"A", "B", "C", "D", "E"}       //useful for multiple data inputs
    };
    for (int i = 0; i < 2; i++) {           //for loop outside iterate through the amount of arrays
        for (int j = 0; j < 5; j++) {       //for loop inside will iterate through the elements
            cout << array[i][j] << endl;    
    }
    return 0;
};