#include <iostream>
#include <string>
using namespace std;

void theNames(string fname, int age){
    cout << fname << " Vignette. " << age << " years old. \n"; 
}

int main() {
    theNames("Liam", 3);
    theNames("Lilia", 18);
    theNames("Lanette", 24);
    return 0;
};