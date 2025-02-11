#include <iostream>
using namespace std;

//There are 3 general acc. specifier which are:
// 1. public -> members are accessible from outside the class
// 2. private -> members aren't accessible from outside of the class (even viewed)
// 3. protected -> members can't be accessed outside of class, but can be accessed once inherited to another class

class aClass{
    public:
        int x;
    private:
        int y;
};

int main(){
    aClass aObj;
    aObj.x = 25;    //allowed
    aObj.y = 15;    //not allowed
    return 0;
};

//the compiler have detected it as private, so it won't run the code.