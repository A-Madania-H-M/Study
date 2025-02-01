#include <iostream>
#include <string>
using namespace std;

int main (){
    //declare variables
    int choice;
    int item;
    double total = 0;
    double water = 3.09;
    double energybar = 5.00;
    double candy = 0.50;

    do {
        cout << "Convenience shop\n";
        cout << "1. Water\n";
        cout << "2. Energy Bar\n";
        cout << "3. Candy\n";
        cout << "4. Total\n";
        cout << "5. Exit\n";
        cout << "Menu choice\n";
        cin >> choice;
        cout << endl;

        if (choice >= 1 && choice <= 3){
            cout << "Enter the amount of items needed: ";
            cin >> item;
        }
        
        switch (choice) {
            case 1:
            total += item * water;
            cout << "Water price: " << water << endl;
            cout << "Total: " << total << endl;
            break;

            case 2:
            total += item * energybar;
            cout << "Energy bar price: " << energybar << endl;
            cout << "Total: " << total << endl;
            break;

            case 3:
            total += item * candy;
            cout << "Candy price: " << candy << endl;
            cout << "Total: " << total << endl;
            break;

            case 4:
            cout << "End total is: " << total << endl;
            break;

            case 5:
            cout << "Quitting Convenience shop, farewell!\n";
            break;
            
            default:
                cout << "Choice is not available\n";
        };
        cout << endl;
    
    } while (choice != 5);
    
    return 0;
};