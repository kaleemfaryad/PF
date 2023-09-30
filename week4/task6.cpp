#include<iostream>
using namespace std;
void longestTime(int hour,int min);

main(){
cout << "Enter the number of hours: ";
int hour;
cin >> hour;
cout << "Enter the number of minutes: ";
int min;
cin >> min;
longestTime(hour,min);
}
void longestTime(int hour,int min){
if(hour*60 > min){
 cout << hour ;
}

if(hour*60 < min){
 cout << min ;
}
}