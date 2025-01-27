#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int calc;
    double num1, num2;
    double result;

    do {
        cout << "Calculator menu\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit from Calculator\n";
        cout << "Choose from above! ";
        cin >> calc;

        if (calc >= 1 && calc <= 4){
            cout << "Enter desired first number: ";
            cin >> num1;
            cout << "Enter desired second number: ";
            cin >> num2;
        }

        switch (calc) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            
            case 4:
                if (num2 != 0){
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                    }
                else {
                    cout << "Error, division by zero\n" << endl;
                }
                break;

            case 5:
                cout << "Quitting Calculator, farewell traveler!.\n";
                break;

            default:
                cout << "Wrong choice! Type again!\n";
        };
        cout << endl;

    } while (calc != 5); 
    
    return 0;
};