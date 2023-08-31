#include <iostream>
#include <string>
using namespace std;

//if char, needs to use '' symbol!!
int  displayMessage(){
    int userinput;
    cout<< "Hi user! Welcome to Ang Industries's cafeteria! \n";
    cout << "PLease enter your Worker ID or Guest ID to activate your ewallet.\n";
    cin >> userinput;
    string uiTostring = to_string(userinput);
    if(uiTostring.length() == 6){
        cout << "Welcome!";

        return userinput;
       
    }else{
        displayMessage();
        return 0;
    }
}



class Food{
 private:
    string foodname;
    double foodprice;
    string foodsize;
    string foodgenres;

    public:
        Food(string fd, double fp, string fs, string fg){
            foodname = fd;
            foodprice = fp;
            foodsize = fs;
            foodgenres = fg;
        }

        string getFoodName(){
            return foodname;
        }
        void setFoodName(string fn){
            foodname = fn;
        }
        double getFoodPrice(){
            return foodprice;
        }
        void setFoodprice(double fp){
            foodprice = fp;
        }

        string getFoodSize(){
            return foodsize;
        }
        void setFoodSize(string fs){
            foodsize = fs;
        }
        string getFoodGenres(){
            return foodgenres;
        }
        void setFoodGenres(string fg){
            foodgenres = fg;
        }
};

class Asianfood: public Food{
    private:
        int spicyelvel;
    public:
        Asianfood(string foodname, double foodprice, string foodsize, string foodgenres, int spicylvl) 
        :Food(foodname, foodprice, foodsize, foodgenres ){
            spicyelvel = spicylvl;

        }

        int getSpicyLevel(){
            return spicyelvel;
        }

        void setSpicyLevel(int sl){
            spicyelvel = sl;
        }


};

class customer{
    private:
        int customerid;
        string customername;
        double customerbalance;
        

    public:
         customer(int cid, double cb){
         customerid = cid;    
         customerbalance = cb;
        }

        int getCustomerId(){
            return customerid;
        }
        void setCustomerId(int id){
            customerid = id;
        }
        string getCustomerName(){
            return customername;
        }
        void setCustomerName(string cn){
            customername = cn;
        }
        double getCustomerBalance(){
            return customerbalance;
        }
        void setCustomerBalance(double cb){
            customerbalance = cb;
        }

};



int main(){
    // string usrres;
    // int userinputid = displayMessage(); 
    // cout<< userinputid <<"\n";
    // customer customer1(userinputid, 1000.0);
    // cout << customer1.getCustomerId() << "\n" << customer1.getCustomerBalance();
    // cout << "Would you like to have some asian cuisine?\n";
    // cin >> usrres;
    // if(usrres == "yes"){
    //     string usrresfood;
    //     Asianfood af();
    //     cout<< "set food name:";
    //     cin >> usrresfood;
    // }
    
    Asianfood af = Asianfood("Eastern fried-rice", 7.50, "R", "Asian", 0);
    //Asianfood af("", 5.50, "R", "Asian", 0);
    cout << af.getFoodGenres() << "\n";
    cout << af.getFoodName();


    return 0;
}