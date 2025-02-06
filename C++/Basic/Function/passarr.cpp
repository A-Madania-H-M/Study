#include <iostream>
using namespace std;

void aFunction(int aNumber[5]){
    for (int i = 0; i < 5; i++) {
        cout << aNumber[i] << "\n";
    }
}

int main() {
    int aNumber[5] = {10,20,30,40,50};
    aFunction(aNumber);
    return 0;
};