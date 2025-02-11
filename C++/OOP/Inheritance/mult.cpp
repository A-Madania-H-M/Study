#include <iostream>
using namespace std;

//Parent class
class Tango{
    public:
        void Function(){
            cout << "Tango is a parent class\n";
        }
};

//Diff parent class
class Nabati{
    public:
        void diffFunction(){
            cout << "Nabati is also a parent class\n";
        }
};

//Child class taking two diff parent class
class Wafer: public Tango, public Nabati{};

int main(){
    Wafer Obj;
    Obj.Function();
    Obj.diffFunction();
    return 0;
};