#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;




 

 static int DisplayMessage(){
    int userinput; 
    int registerednums[5] = {12345, 89021, 36780, 28763, 98621};
    cout<<"Hi user Please verify your instructor id:" << endl;
    cin>>userinput;
    for(int i=0; i<sizeof(registerednums); i++ ){
        if(userinput == registerednums[i]){
            
            cout<<"successfully verified." <<endl;
            return userinput;
        }else{
            
            DisplayMessage();
            return 0;
        }
    }
}

class Person{
    private:
        // string name;
    public:
        string name;
        Person(string n){
            name = n;
        }
        void setName(string n){
            name = n;
        }    

        string getName(){
            return name;
        }

};

class Car{
    private:
        string brand;
        int registerednum;
        
    
    public:
        Car(){
            // brand= brnd;
            // registerednum = rdn;

        }

        void setBrand(string b){
            brand = b;
        }

        string getBrand(){
            return brand; 
        }
        int getRegisteredNum(){
            return registerednum;
        }
        void setRegisteredNum(int rn){
            registerednum = rn;
        }

};





class Instructor: public Person{
    private:
        int instructoric;
        Car car;
    public:
        Instructor(int ic, Car c, string n):Person(name){
         instructoric = ic;
         car = c;
         name = n;

    }

    int getInstrcuric(){
        return instructoric;
    }

    void setInstructoric(int ic){
        instructoric = ic;
    }
    Car getCar(){
        return car;
    }

    void setCar(Car c){
        car = c;
    }



};
class Student:Person{

};


int main(){
    Car car1;
    car1.setBrand("BMW");
    car1.setRegisteredNum(56783);
    cout << car1.getBrand() << endl;
    Instructor ins1(DisplayMessage(), car1, "Hyuna");

    cout<< "Information:"<<"\n"<<"instructor ic:"<<ins1.getInstrcuric() <<"\n";
    cout<< "instructor name" << ins1.getName() << "\n";

    
    //cout<< ins1.getCar()<<endl;
    
    

    //Instructor Instructor1(DisplayMessage(), car, "Hyuna");

    return 0;
}