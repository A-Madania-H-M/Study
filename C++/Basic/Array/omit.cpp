#include <iostream>
#include <vector>
using namespace std;

int main() {
    string cars[] = {"Toyota", "McLaren", "Playmouth"};     //You can omit the size of an array
    for (int i = 0; i < 3; i++) {                           //or the compiler can figure it out 
        cout << cars[i] << "\n";                            //considered good practice to include the size
    }                                                       //to avoid unwanted errors
    return 0;
};