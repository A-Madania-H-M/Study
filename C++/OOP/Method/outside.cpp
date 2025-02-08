#include <iostream>
using namespace std;

class aClass{
    public:
        void aMethod();
};

void aClass::aMethod(){
    cout << "Hello World!" << endl;
};

int main(){
    aClass aObj;
    aObj.aMethod();
    return 0;
};