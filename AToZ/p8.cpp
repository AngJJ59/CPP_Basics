#include <iostream>
#include <vector>
using namespace std;


//  vector for loop and method using
// vector similar to arraylist in java

int theMethod(){
    
    string a;
    cout << "do you wanna add something to the list:";
    cin  >>  a;
    if(a == "yes" || a == "Yes" || a == "y" || a == "YES"){
        int x;
        cout << "enter the length of the list:";
        cin >> x;
        return x;

    } else if(a == "no"){
        cout << "bye";
        return 0;
    }else{
        return 0;
    }

}

void addInArray(int a){
    vector<int> arr;
    for(int i=0; i<a; i ++){
        int x;
        cout<< "add ur item:";
        cin >> x;
        arr.push_back(x);
        // cout << arr[a];
        
    }

    for(int j =0; j<arr.size(); j++){
        cout << arr.at(j);
    }
    
}







int main(){
    
    addInArray(theMethod());

    return 0;

}

