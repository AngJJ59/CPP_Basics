#include <iostream>
using namespace std;

//constructor
//used to set initial value for the attributes of a class



class Employee{
    private:
        int employeeid;
        string nationality = "malaysian";
    public:
        
        Employee(int emp){ // with parameters
            employeeid = emp;
        }
        // Employee(){
        //     cout << nationality;
        // }

        int getEmployeeID(){
            return employeeid;
        }
};


int main(){
    Employee ep1(123);
    
    cout << "\n"<<ep1.getEmployeeID() << "\n";

    return 0;
}


