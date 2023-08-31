#include <iostream>
using namespace std;


class Student{
    private:
        int studentid;
    public:
        Student(int id){
            studentid = id;
        }
        void setStudentId(int id){
            studentid = id;
        }
        int getStudentId(){
            return studentid;
        }
};



int main(){
    Student s1(123456);
    cout<< "default id:" << s1.getStudentId() << "\n";
    int studentIDD;
    cout << "hi user!, please set your student id:";
    cin >> studentIDD;
    s1.setStudentId(studentIDD);
    cout<<s1.getStudentId();



    

    cout << "new ID:" << s1.getStudentId();
    return 0;

}