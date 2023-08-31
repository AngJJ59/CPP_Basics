#include <iostream>
using namespace std;
#include <cmath>
// cmath library
//and function AK method

//function declaration at first
int selectionOperator(string a, int x){
        if(a=="sqrt"){
            return sqrt(x);
            
        }else if(a == "log"){
            return log(x);
        }else{
            return 0;
        }  
}

int main(){

    int x;
    cout << "Enter a num:";
    cin >> x;
    string a; 
    cout << "select an operator:";
    cin >> a;
    cout<< selectionOperator(a, x);
    return 0;
}
