#include <iostream>
using namespace std;

int main(){
    int items = 50;
    double cost = 9.99;
    double total = items * cost;
    char currency = '$';

    cout << "Number of items     = " << items << " items" << "\n";
    cout << "Cost of single item = " << currency << cost << "\n";
    cout << "Total cost of items = " << currency << total << "\n";
    return 0;
};