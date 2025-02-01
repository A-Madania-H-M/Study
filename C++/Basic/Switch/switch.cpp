#include <iostream>
#include <string>
using namespace std;

int main() {
    //declalre variable
    int day;
    cout << "Days of a week\n";
    cout << "==================\n";
    cout << "1. Monday\n";
    cout << "2. Tuesday\n";
    cout << "3. Wednesday\n";
    cout << "4. Thursday\n";
    cout << "5. Friday\n";
    cout << "6. Saturday\n";
    cout << "7. Sunday\n\n";
    
    cout << "Insert the index for day: ";   //Inserting variable from user
    cin >> day;

    switch (day){       //Using switch case, we can determine what block of code will be used
        case 1:
        cout << "Monday\n";
        break;

        case 2:
        cout << "Tuesday\n";
        break;

        case 3:
        cout << "Wednesday\n";
        break;

        case 4:
        cout << "Thursday\n";
        break;

        case 5:
        cout << "Friday\n";
        break;

        case 6:
        cout << "Saturday\n";
        break; 

        case 7:
        cout << "Sunday\n";
        break;

        default:
        cout << "The index inserted is not available\n";    //Default used for exception handle
                                                            //to avoid any unexpected variable

    }
    return 0;
};