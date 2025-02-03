#include <iostream>
#include <vector>
using namespace std;

int main() {
    int array[5] = {10,20,30,40,50};
    cout << "Using sizeof() operator will return bytes = ";
    cout << sizeof(array) << "\n";
    
    int getLength = sizeof(array) / sizeof(array[0]);
    cout << "To show proper size of array, divide size of array with the size of the first array = ";
    cout << getLength << "\n";
    return 0;
};
