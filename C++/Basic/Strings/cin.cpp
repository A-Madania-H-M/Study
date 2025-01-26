#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName;

    cout << "Your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName << "\n";
    
    // Normally, cin function considers whitespace a termination.
    // getline() function is to read a line of text,
    // having getline(cin, var) will give the ability
    // to input a line of text.

    return 0;
};