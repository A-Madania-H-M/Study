#include <iostream>
using namespace std;

int main(){
    struct {
    int integer;
    string sentence;
} myStructure;

myStructure.integer = 2;
myStructure.sentence = "Hellow World!";

cout << myStructure.integer << "\n";
cout << myStructure.sentence << "\n";
return 0;
};
