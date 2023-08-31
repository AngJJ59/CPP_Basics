#include <iostream>
using namespace std;


class Vehicle{
    private:
        string name;
        string brand;
    public:
        // string name;
        // string brand;
        Vehicle(){
            cout << "hello";
        }
        void start(){
            cout << "broom";
        }
        string getName(){
            return name;
        }

};

class Car: public Vehicle{
    private:
        int wheels;

    public:
        void transform(){
            cout << "autobots";
        }
};

int main(){
    //Vehicle v("bleucar", "mustang");
   // Car c1();
    //cout << c1;
    //cout << "\n" << v.getName();
    return 0;
}
