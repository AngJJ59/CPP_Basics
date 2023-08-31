#include <iostream>
#include <vector>
using namespace std;

class Professor{
    private:
        string name;
        string department;
        int employeeid;
        char rate;
        vector<string> inchargesubjects;

    public:
        //constructor
        Professor(string name, string department, int id, 
        char rate, vector<string> inchargesubjects){
            name = name;
            department = department;
            employeeid = id;
            rate = rate;
            inchargesubjects = inchargesubjects;

        }

        //getters and setters
        string getName(){
            return name;
        }

        void setName(string name){
            name = name;
        }
        string getDepartment(){
            return department;
        }

        void setDepartment(string department){
            department = department;
        }
        int getEmployeeID(){
            return employeeid;
        }
        void setEmployeeID(int employeeid){
            employeeid = employeeid;
        }
        char getRate(){
            return rate;
        }
        void setRate(char rate){
            rate = rate;
        }

        vector<string> getInchargeSubjects(){
            return inchargesubjects;
        }
        void setInChargeSubjects(vector<string> ics){
            inchargesubjects = ics;
        }

};


int  verify(int arr[3]){
    int a;
    cout << "Hi User!, Please enter your Employee ID to start the verification:";
    cin >> a;
    for(int i=0; i<3; i++ ){
        if(arr[i] == a){
            return a;
        }else{
            cout<<"invalid user";
            
            return 0;
        }
    }
}

int main(){
    int professors[3] = {123456, 789012, 864752};
    int id = verify(professors);
    cout <<"yo,"<<id << "\n";
    string n;
    string dp;
    char r;
    int sizeofsubjectsteach;
    Professor prof1("N/A", "N/A\n", id, 0, {});
    
    cout << "Hi professor! Please your name:";
    cin >> n;
    prof1.setName(n);
    cout << "\n your department:";
    cin >> dp;    
    prof1.setDepartment(dp);
    cout << "\nyour rate:";
    cin >> r;
    prof1.setRate(r);
    prof1.setEmployeeID(id);
    // cout << "\nhow many subjects u r in charge of:";
    //cin >> sizeofsubjectsteach;
    // for(int i=0; i<sizeofsubjectsteach; i++){
    //     vector<string> ar;
    //     string subjectname;
    //     cout<< "enter the subject:";
        
    //     cin >> subjectname;
    //     ar.push_back(subjectname);
    //     prof1.setInChargeSubjects(ar);

    


    cout << "professor name:" << "" <<prof1.getName() << "\n"
            "department:" << "" <<prof1.getDepartment() << "\n"
            "employee id:" << "" <<prof1.getEmployeeID() << "\n"
            "rate:"<<""<< prof1.getRate() <<"\n"
            ;
    //cout << prof1.getInchargeSubjects();
    // for(int j =0; j<sizeofsubjectsteach; j++){
    //     cout << prof1.getInchargeSubjects().at(j);
    // }        

    return 0;
}


