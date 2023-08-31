#include <iostream>
#include <vector>
using namespace std;

// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
// class Department;
// class Employee;
// class Manager;

class Employee{
    // protected:
    //  int employeeID;
    //  string name;
    //  double salaries;
        

    public:
        int employeeID;
        string name;
        double salaries = 1000;
        Employee(int employeeID,string name, double salaries){
            employeeID = employeeID;
            name = name;
            salaries = salaries;
        }

       int getEmployeeID(){
           return employeeID;
       }
       void setEmployeeID(int employeeID){
           employeeID = employeeID;
       }
       string getName(){
           return name;
       }
       void setName(string name){
           name = name;
       }
       double getSalaries(){
           return salaries;
       }
       
};


// class Department{
//     private:
//         string departmentname;
//         vector<Employee> employees;
//         Manager departmentmanager;

//     public:
//         Department(string departmentname, vector<Employee> employees, Manager departmentmanager){
//                 departmentname = departmentname;
//                 employees = employees;
//                 departmentmanager = departmentmanager;        
//         }     
// };


class Manager: public Employee{
    public:
        Manager(int employeeID,string name, double salaries)
        :Employee(employeeID, name, salaries){

        }

        void increaseSalaries(double increasedamount){
            salaries +=  increasedamount;
        }
};


// class EmployeeDatabse{
//     private:
//         int employeeidtables[5] = {123456, 234421, 123453, 789012, 145678}; 


// };
    double enterIncreasedSalariesAmount(Manager manager){
        double ia;
        cout<<"Hi!" << manager.getName() << "," << " " << "\n" << "please enter the amount that you propose for the employee:";
        cin >> ia;
        return ia;
    }
int main(){
    // Manager managerOfIT(167896, "James", 5000.00);
     Employee louis(234421, "Louis Tan", louis.salaries);
    Manager managerOfIT = Manager(167896, "James", 5000.00);
    

    //back up plan
    louis.setName("Louis");
    louis.setEmployeeID(234421);
    


    cout << "Employee ID:" << louis.getEmployeeID() << "\n";
    cout << "Name:" << louis.getName() << "\n";
    cout << "original salaries:" << louis.getSalaries() << "\n";
    cout << "_______________________________________" << "\n";
    
    cout << "Employee ID:" << louis.getEmployeeID() << "\n";
    cout << "Name:" << louis.getName() << "\n";
    cout << "latest salaries:" << louis.getSalaries() + enterIncreasedSalariesAmount(managerOfIT);


    return 0;
}


//problems:
 //object print different things rather than the initialized attributes