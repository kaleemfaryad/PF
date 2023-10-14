#include<iostream>
using namespace std;

float servicecode(char type, char time, int min);
main(){
    cout <<"Enter the service code (R/r for regular, P/p for premium): ";
    char Type ;
    char Time;
    cin >> Type;
    if(Type == 'P' || Type == 'p'){
    cout << "Enter time of the call (D/d for day,N/n for night): ";
     cin>> Time;
     cout <<"Enter the number of minutes used: ";
     int Min ;
     cin>> Min;
     float result = servicecode(Type,Time,Min);
     cout << "Service Type: " << "Premium" <<endl;
     cout << "Total Minutes Used: " << Min <<" minutes" <<endl;
     cout << "Amount Due: $" << result;
    }
     if(Type  == 'R' || Type == 'r'){
    cout <<"Enter the number of minutes used: ";
     int Min ;
     cin>> Min;
     float result = servicecode(Type,Time,Min);
     cout << "Service Type: " << "Regular" <<endl;
     cout << "Total Minutes Used: " << Min <<" minutes" <<endl;
     cout << "Amount Due: $" << result;
    }
    if((Type != 'P' || Type != 'p' ) && (Type != 'R' || Type != 'r')){
        cout <<"Error";
    }
    
}

float servicecode(char type, char time, int min){
    float result;
    if((type == 'R'|| type == 'r') && min <= 50 ){
        result = 10.00;
    }
    if((type == 'R' || type == 'r') && min > 50){
        result = (min-50)*(0.20)+ (10.00) ;
    }
    if((type == 'P' || type == 'p') && (time == 'D' || time == 'd' ) && (min <= 75)){
        result =25.00;
        
    }
    if((type == 'P' || type == 'p') && (time == 'N' || time == 'n' ) && (min <= 100)){
        result = 25.00;
        
    }
    if((type == 'P' || type == 'p') && (time == 'N' || time == 'n' ) && (min > 100)){
        result = (25.00)+(0.05)*(min-100);
        
    }
    return result;
}