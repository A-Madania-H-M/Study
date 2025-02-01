#include <iostream>
using namespace std;

int main() {                                            //for loop repeat until desired amount
    cout << "Loop i variable until it's less than 5\n";
    for (int i = 0; i <  5; i++) {                      //in for loop, the parameter can be the
        cout << i << "\n";                              //variables, operation, and conditions
    }

    cout << endl;
    cout << "Loop j variable until it's less equal than 10\n";
    for (int j = 0; j <= 10; j = j + 2){
        cout << j << "\n";
    }
    return 0;
};

