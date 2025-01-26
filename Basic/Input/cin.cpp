#include <iostream>
using namespace std;

int main(){
    //Declare variable
    int x;

    //Using cin to receive variable value
    cout << "Type in the desired number" << "\n";   //cout is read as see-out
    cout << "==========================" << "\n";   
    cin >> x;                                       //cin is read as see-in
    cout << "==========================" << "\n";
    cout << "Number picked is: " << x << "\n";

    //Return to 0 when finished
    return 0;
};