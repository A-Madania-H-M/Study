#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int time;

    cout << "Input the time! ";
    cin >> time;

    if (time < 20){
        cout << "Good Morning! \n";
    } else {
        cout << "Good Night! \n"; 
    }
    return 0;
};