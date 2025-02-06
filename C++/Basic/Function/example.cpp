#include <iostream>
using namespace std;

float toCelsius(float fahrenheit){
    return (5.0/9.0) * (fahrenheit - 32.0);
}

int main() {
    float f_val = 98.8;
    
    float result = toCelsius(f_val);
    cout << "Fahrenheit: " << f_val << endl;
    cout << "Convert to Celsius: " << result << endl;

    return 0;
};