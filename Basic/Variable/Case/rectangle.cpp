#include <iostream>
using namespace std;

int main(){
    //Int Var
    int length = 4;
    int width = 6;
    int area;

    //Calculate area
    area = length * width;

    //Print result
    cout << "Calculating area of a rectangle" << "\n";
    cout << "===============================" << "\n";
    cout << "Length:    " << length << "\n";
    cout << "Width:     " << width << "\n";
    cout << "Area:      " << area << "\n";
    
    //return to 0 when finished
    return 0;
};