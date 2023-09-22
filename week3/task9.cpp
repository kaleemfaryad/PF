#include<iostream>
using namespace std;

main(){
int input,sum;
cout <<"Enter a 4-digit number: ";
cin>> input;
int number1,number2,number3,number4;
int n4,n3,n2,n1;
number1 = input % 10;
n4= number1;
input = input/10; 
number2= input % 10;
n3 = number2;
input = input/10;
number3 = input % 10;
n2 = number3;
input = input/10;
number4 = input % 10;
n1 = number4;
cout << n1 << n2 << n3 << n4;




}