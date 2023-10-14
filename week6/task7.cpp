#include<iostream>
using namespace std;

string checkstatus(int examtime, int exammin, int studtime, int studmin);

main(){
    cout<< "Enter Exam Starting Time (hour): ";
    int Examtime;
    cin>> Examtime;
    cout<< "Enter Exam Starting Time (minutes): ";
    int Exammin;
    cin>> Exammin;
    cout<< "Enter Student hour of arrival: ";
    int Studtime;
    cin>> Studtime;
    cout<< "Enter Student minutes of arrival: ";
    int Studmin;
    cin>> Studmin;
    cout << checkstatus(Examtime, Exammin, Studtime,  Studmin);

}
string checkstatus(int examtime, int exammin, int studtime, int studmin){
string result;
float Ehour = (examtime*60);
float Emin  = (exammin);
float Shour = (studtime*60);
float Smin =  (studmin);
float startingtime = Ehour + Emin;
float arivaltime = Shour + Smin;
float subtraction = startingtime - arivaltime;
if(startingtime > arivaltime && subtraction > 30){
    int subtraction =   startingtime -arivaltime;
       if(subtraction < 60){
    result = "Early \nTest: " +to_string(subtraction)+ "\n"+to_string(subtraction)+ " minutes before the start";
}
   if(subtraction >= 60){
    int sub = subtraction/60;
    int sub1 = subtraction - (sub *60);
    result = "Early \nTest: " +to_string(subtraction)+ "\n" +to_string(sub)+ ":" +to_string(sub1)+ " hours before the start";
}
    // result = "Early";
}
if(startingtime >= arivaltime && subtraction <= 30){
   
    result = "On time";
}
if(startingtime < arivaltime ){
   int subtraction =  arivaltime - startingtime;
   if(subtraction < 60){
    result = "Late \nTest: " +to_string(subtraction)+ "\n"+to_string(subtraction)+ " minutes after the start";
}
   if(subtraction >= 60){
    int sub = subtraction/60;
       int sub1 = subtraction - (sub *60);
    result = "Late \nTest: " +to_string(subtraction)+ "\n" +to_string(sub)+ ":" +to_string(sub1)+ " hours after the start";
}

}
return result;
}
