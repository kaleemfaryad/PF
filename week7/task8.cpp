#include<iostream>
#include<iomanip>
using namespace std;

void priceperton(int cargo);
main(){
int Cargo;
cout<<"Enter the count of cargo for transportation: ";
cin>> Cargo;
 priceperton(Cargo);
}

 void priceperton(int cargo){
    float ton = 0;
    float price = 0;
    float bus = 0;
    float truck = 0;
    float total = 0;
    float train = 0;
    for(int i = 1; i <= cargo;i++){
        cout <<"Enter the tonage of cargo 1: ";
        cin>>ton;
        if(ton <= 3){
            price += 200 * ton;
            bus += ton;
        }
        if(ton > 3 && ton <= 11){
            price += 175 * ton;
            truck += ton;
        }
        if(ton > 11){
            price += 120 * ton;
            train += ton;
        }
        total += ton;
    }
    cout <<fixed << setprecision(2);
    cout << price/total << endl;
    cout << bus/total*100<<"%" << endl;
    cout << truck/total*100<<"%" << endl;
    cout << train/total*100<<"%" << endl;
    
}