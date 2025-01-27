#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Finding highest value 
    double x;
    cout << "Type the first number!     ";
    cin >> x;

    double y;
    cout << "Type the second number!    ";
    cin >> y;

    cout << "The highest number between the two is: ";
    cout << max(x,y) << "\n";
    return 0;

};