#include <iostream>
#include <string>
using namespace std;

//getter, setter and private encapsulation.
//when an attribute is private, the attr cannot be accessed outside the class, 
//so must use getter and setter to access the attr

class Car{
    private:
        string securitykey;

    public:
        void setSecurityKey(string sk){
            securitykey = sk;
        }   
        string getSecurityKey(){
            return securitykey;
        } 
};

int main(){

    Car car1;
    car1.setSecurityKey("12353FAW");
    cout << "car1 private key is:" << car1.getSecurityKey();


return 0;
}



