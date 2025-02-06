#include <iostream>
#include <string>
using namespace std;

int maths(int x, int y){
    return x + y;
}

int main() {
    int z = maths(3, 10);
    cout << z << endl;
    return 0;
};