#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//Program to find the average age

int main() {
    //declare the variables
    int ages[] = {22, 25, 18, 34, 40, 80, 21};
    float avg, sum = 0;
    int i;

    //Array length
    int length = sizeof(ages) / sizeof(ages[0]);

    //Loop through the elements of array
    for (int age:ages) {
        sum += age;
    }

    //variable for the average age
    avg = sum / length;

    //print the result
    cout << "Average age is: " << avg << "\n";

    //close program
    return 0;
};