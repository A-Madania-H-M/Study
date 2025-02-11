#include <iostream>
using namespace std;

class Class{
    public:
        int aNum;
        string aString;
};

int main() {
    Class Obj;

    Obj.aNum = 15;
    Obj.aString = "Hello World!";

    cout << Obj.aNum << endl;
    cout << Obj.aString << endl;
    return 0;
};