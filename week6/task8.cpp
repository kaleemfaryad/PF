#include<iostream>
using namespace std;

int calculatevolleyball(string year, int holidays, int weekends);
main(){
    cout <<"Enter year type: ";
    string Year;
    cin>> Year;
    cout <<"Enter numbber of holidays: ";
    int Holidays;
    cin >> Holidays;
    cout <<"Enter number of weekends:";
    int Weekends;
    cin>> Weekends;
    cout << calculatevolleyball(Year, Holidays, Weekends );
}
int calculatevolleyball(string year, int holidays, int weekends){
   float fholiday = holidays*0.667;
   float fweekends =( 0.75)*(48 - weekends);
   float tplaytime = fholiday + fweekends + weekends;
   float leaptime = tplaytime + (tplaytime*0.15);
   if(year =="normal"){
    return tplaytime;
   }
   if(year =="leap"){
    return leaptime;
   }

}
