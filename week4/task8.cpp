#include<iostream>
using namespace std;
void pet(int holidays);

main(){
cout << "Holidays: ";
int holidays;
cin >> holidays;
pet(holidays);
}
void pet(int holidays){
int total = 30000;
int workingday;
workingday = 365 - holidays;
int time;
time = ((workingday*63)  + (holidays*127));
int difference,hours,min ;
difference = total - time;
if(total > time ){
cout << "Tom sleeps well\n";
hours = difference/60 ;
min = difference%60 ;
 cout << hours << " hours and " << min << " minutes less for play";
}
if(total < time){
difference =  time - total;
cout << "Tom will run away\n";
hours = difference/60 ;
min = difference%60 ;
  cout << hours << " hours and " << min << " minutes for play";
}


}

   
