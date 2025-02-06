#include <iostream>
using namespace std;

int plusFuncInt(int x, int y){
    return x + y;
}

double plusFuncDouble(double x, double y){
    return x + y;
}

int main(){
    int Num1 = plusFuncInt(8,5);
    double Num2 = plusFuncDouble(4.3, 6.6);
    
    cout << "Int:    " << Num1 << endl;
    cout << "Double: " << Num2 << endl;

    return 0;
};