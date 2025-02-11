#include <iostream>
using namespace std;

//Specifying the acces mod. to protect sensitive info
//Parent class
class Employee{
    protected:
        int salary;
};

//Child class
class Programmer: public Employee{
    public:
        int bonus;
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};

int main(){
    Programmer Pay;
    Pay.setSalary(500);
    Pay.bonus = 1000;
    cout << "Salary: " << Pay.getSalary() << endl;
    cout << "Bonus:  " << Pay.bonus << endl;
    cout << "Total:  " << Pay.getSalary() + Pay.bonus << endl;
    return 0;
}