#include <iostream>
using namespace std;

int x = 5;

void global() {
    cout << x << "\n";
};

int main(){
    global();

    cout << x;
    return 0;

};