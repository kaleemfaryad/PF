#include <iostream>
using namespace std;
float taxcalculator(char c,int p);
main()
{
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    char code;
    cin >> code;
    cout << "Enter the price of the vehicle: $";
    float price;
    cin >> price;
    float result1 = taxcalculator(code, price);
    cout<<"The final price of a vehicle of type "<< code <<" after adding the tax is " << result1 <<".";
}
float taxcalculator(char c,int p)
{
    float result;
    if(c == 'M'){
       result = p + (p)*(0.06);
       return result; 

    }
    if(c == 'E'){
       result = p + (p)*(0.08);
       return result; 
    }
    if(c == 'S'){
       result = p + (p)*(0.1);
       return result; 
    }
    if(c == 'V'){
       result = p + (p)*(0.12);
       return result; 
    }
    if(c == 'T'){
       result = p + (p)*(0.15);
       return result; 
    }
}