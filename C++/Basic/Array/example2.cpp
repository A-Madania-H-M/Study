#include <iostream>
using namespace std;

int main() {
    int ages[] = {22, 25, 18, 34, 40, 80, 21};
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];

    for (int age:ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }
    cout << "The lowest age is: " << lowestAge << "\n";
};