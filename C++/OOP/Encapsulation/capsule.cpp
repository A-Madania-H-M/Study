#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;

    public:
    void setSalary(int s){  //this is a setter
        salary = s;
    };

    int getSalary(){        //this is a getter
        return salary;
    }
};

int main(){                 
    Employee obj;
    obj.setSalary(500);
    cout << obj.getSalary();
    return 0;
};

