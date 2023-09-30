#include<iostream>
using namespace std;
void airline(string country,float price);

main(){
cout << "Enter the country's name: ";
string country;
cin >> country;
cout <<"Enter the ticket price in dollars: $";
float price;
cin>> price;
airline(country,price);
}

void airline(string country,float price){
if(country == "Pakistan"){
 cout << "Final ticket price after discount: $" << (price) - (price*0.05);
}
if(country == "Ireland"){
 cout << "Final ticket price after discount: $" << (price) - (price*0.1);
}
if(country == "India"){
 cout << "Final ticket price after discount: $" << (price) - (price*0.2);
}
if(country == "England"){
 cout << "Final ticket price after discount: $" << (price) - (price*0.3);
}
if(country == "Canada"){
 cout << "Final ticket price after discount: $" << (price) - (price*0.45);
}
}

