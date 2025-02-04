#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";  //the usual variable
    string &meal = food;    //the variable which references above

    cout << food << endl;       
    cout << meal << endl;   //ourpur pizza
    return 0;
};