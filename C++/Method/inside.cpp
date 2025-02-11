#include <iostream>
using namespace std;

class aClass{
    public:
        void aMethod() {
            cout << "Hello World!\n";
        }
};

int main(){
    aClass aObj;
    aObj.aMethod();
    return 0;
};