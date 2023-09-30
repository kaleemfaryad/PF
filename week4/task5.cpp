#include<iostream>
using namespace std;
void bonus(int num1,int num2);

main(){
cout << "Enter your position: ";
int num1;
cin >> num1;
cout << "Enter your friend's position: ";
int num2;
cin >> num2;
bonus(num1,num2);
}
void bonus(int num1,int num2){
if(num2 - num1 <= 6){
 cout << "true";
}

else{
 cout << "false";
}
}