#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10,20,30,40,50};  //int numbers[5] is the amount of elements inside the array
    for (int i : numbers) {             //for each index, it will show the elements value
        cout << i << "\n";
    }
    return 0;
};