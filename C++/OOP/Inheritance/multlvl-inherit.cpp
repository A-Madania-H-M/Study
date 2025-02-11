#include <iostream>
using namespace std;

//Parent class
class Family{
    public:
        void Function(){
            cout << "Content in parent class\n";
        }
};

//Child class
class Child: public Family{};

//Grandchild class
class Grandchild: public Child{};

int main(){
    Grandchild Obj;
    Obj.Function();
    return 0;
};