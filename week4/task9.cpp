#include<iostream>
using namespace std;
void tp(int people, int roll);

main(){
cout << "Number of people in the household: ";
int people;
cin >> people;
cout << "Number of rolls of TP: ";
int roll;
cin >> roll;

tp(people,roll);
}
void tp(int people,int roll){
int tp = 500;
int person = 57;
int result = people*57;
int result1 = roll*500;
int finalresult = result1/result;
if(finalresult > 14){
cout << "Your TP will last " << finalresult << " days, no need to panic!";
}
if(finalresult < 14){
cout << "Your TP will only last " << finalresult << " days, buy more!";
}
}

   
