#include <iostream>
#include <string>
using namespace std;

int main(){
    string greeting = "Hello";
    cout << "The first letter is " << greeting[0] << "\n";
    cout << "The second letter is " << greeting.at(1) << "\n";
    cout << "The last letter is " << greeting.at(greeting.length() - 1) << "\n";

    
    greeting.at(0) = 'J';
    cout << "\n";
    cout << "Change the first letter with J -> ";
    cout << greeting << "\n";
    return 0;
};