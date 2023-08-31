#include <iostream>
using namespace std;
//class keyword to create a class
//inside class function
//outside class function 



//for outside function declaration :
// To define a function outside the class definition, 
// you have to declare it inside the class and then define it outside of the class.
class Student { 
    public:
        string name = "Ang";
        int studentId;
        char grade;
        //inside function //recommended
        void displayMessage(){
            cout<< "hello";
        }

        //outside funciton declaraction
        string MyMethod();
    private: 
        
};

string Student::MyMethod(){ //outside method definiton
    return "hi";
}


int main(){
    Student student1;
    cout << student1.name;
    student1.displayMessage(); //inside method(recommeded).
    cout << student1.MyMethod(); //outside method

    return 0;
}