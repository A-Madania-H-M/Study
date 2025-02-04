#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";      //declare variable

    cout << &food << endl;      //with the &operator, it will get the memo address

    return 0;
};  