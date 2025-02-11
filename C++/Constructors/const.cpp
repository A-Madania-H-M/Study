#include <iostream>
using namespace std;

class aClass{
    public:
        aClass() {
            cout << "This is a constructor!";
        }
};

int main(){
    aClass aObj;
    return 0;
};