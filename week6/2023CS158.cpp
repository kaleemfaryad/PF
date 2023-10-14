// task1

#include<iostream>
using namespace std;

string decideactivity(string temp, string humid);
main(){
    string temperature , humidity;
cout <<"Enter temperature (warm or cold): ";
cin>>temperature;
cout <<"Enter humidity (dry or humid): ";
cin>>humidity;
string result = decideactivity(temperature,humidity);
cout << "Recommended activity: " << result ;

}
string decideactivity(string temp, string humid){
    string result;
    if(temp == "warm" && humid == "dry")
     result = "Play tennis" ;
    else if(temp =="warm" && humid =="humid")
    result = "Swim";
    else if(temp == "cold" && humid == "dry")
    result = "Play basketball";
    else if(temp == "cold" && humid == "humid")
    result = "Watch TV";
    return result;
}

// task2

#include<iostream>
using namespace std;

float caluculateaverage(float markenglish, float markmaths ,float markchemistry, float markscience, float markbiology);
string caluculategrade(float average);
main(){
    string name;
    float english , maths, chemistry, science, biology; 
cout <<"Enter student name: ";
cin>>name;
cout <<"Enter marks for English: ";
cin>>english;
cout <<"Enter marks for Maths: ";
cin>>maths;
cout <<"Enter marks for Chemistry: ";
cin>>chemistry;
cout <<"Enter marks for Social Science: ";
cin>>science;
cout <<"Enter marks for Biology: ";
cin>>biology;
float Percent =caluculateaverage( english, maths ,chemistry, science, biology);;
cout << "Student Name: " << name <<endl;
cout<<"Percentage: " << Percent <<"%" << endl;
cout <<"Grade: " << caluculategrade( Percent);

}
float caluculateaverage(float markenglish, float markmaths ,float markchemistry, float markscience, float markbiology){

    float percent = (markenglish + markmaths + markchemistry + markscience + markbiology)/(5);
    return percent ;
}

string caluculategrade(float average){
    string result;
if(average >= 90 && average < 100)
  result = "A+";
if(average >= 80 && average < 90)
  result = "A";
if(average >= 70 && average < 80 )
  result = "B+";
if(average >= 60 && average < 70)
  result = "B";
if(average >= 50 && average < 60)
  result = "C";
if(average >= 40 && average < 50)
  result = "D";
if( average < 40)
  result = "F";
  return result;
}

// task3

#include <iostream>
using namespace std;

string findzodiacsign(int day, string month);
main()
{
    cout << "Enter the day of birth: ";
    int Day;
    cin >> Day;
    cout << "Enter the month of birth (e.g., January, February): ";
    string Month;
    cin >> Month;
    string result = findzodiacsign(Day, Month);
    cout << "Zodiac Sign: " << result;
}

string findzodiacsign(int day, string month)
{
    string result;
    if ((month == "March" )&&(day >= 21 && day <=30) || (( month == "April") && (day >=1 && day <= 19)))
    {
        result = "Aries";
    }
    else if (((month == "April" )&&(day >= 20 && day <=30)) || (( month == "May") && (day >=1 && day <= 20)))
    {
        result = "Taurus";
    }
    else if (((month == "May" )&&(day >= 21 && day <=30)) || ( ( month == "June")&& (day >=1 && day <= 20)))
    {
        result = "Gemini";
    }
    else if (((month == "June" )&&(day >= 21 && day <=30) )|| (( month == "July")  && (day >=1 && day <= 22)))
    {
        result = "Cancer";
    }
    else if (((month == "July" )&&(day >= 23 && day <=30)) || (( month == "August") && (day >=1 && day <= 22)))
    {
        result = "Leo";
    }
    else if (((month == "August") && (day >= 23 && day <=30)) || ( (month == "September") && (day >=1 && day <= 22)))
    {
        result = "Vigro";
    }
    else if (((month == "September" )&& (day >= 23 && day <=30)) || (( month == "October") && (day >=1 && day <= 22)))
    {
        result = "Libra";
    }
    else if (((month == "October" )&& (day >= 23 && day <=30)  )|| (( month == "November")&& (day >=1 && day <= 21)))
    {
        result = "Scorpio";
    }
    else if (((month == "November" )&&(day >= 22 && day <=30)) || ( ( month == "December")&& (day >=1 && day <= 21)))
    {
        result = "Sagittarius";
    }
    else if (((month == "December" )&&(day >= 22 && day <=30)) || (( month == "January") && (day >=1 && day <= 19)))
    {
        result = "Capricorn";
    }
    else if (((month == "January" )&&(day >= 20 && day <=30))|| (( month == "February")  && (day >=1 && day <= 18)))
    {
        result = "Aquarius";
    }
    return result;
}


// task4

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


// task 5

#include<iostream>
using namespace std;

float caluculateprice(string fruit, string day, double quantity);
main(){
    cout <<"Enter the fruit name: ";
    string Fruit;
    cin >> Fruit;
    cout <<"Enter the day: ";
    string Day;
    cin >> Day;
    cout <<"Enter the quantity of fruits: ";
    double Quantity;
    cin >> Quantity;
    float result = caluculateprice( Fruit, Day , Quantity);
    if(result >1){
     cout << caluculateprice( Fruit, Day , Quantity);
    }
    else{
        cout << "Error";
    }
}

float caluculateprice(string fruit, string day, double quantity){
    float result=0;
    if(day == "Saturday" || day == "Sunday") {
        float banana = 2.70;
        float apple = 1.25;
        float orange = 0.90;
        float grapefruit = 1.60;
        float kiwi = 3.00;
        float pineapple = 5.60;
         float grapes = 4.20;
        if(fruit == "banana"){
            result = banana*quantity;
        }
        else if(fruit == "apple"){
            result = apple*quantity;
        }
       
        else if(fruit == "orange"){
            result = orange*quantity;
        }
      
        else if(fruit == "grapefruit"){
            result = grapefruit*quantity;
        }
       
        else if(fruit == "kiwi"){
            result = kiwi*quantity;
        }
        
        else if(fruit == "pineapple"){
            result = pineapple*quantity;
        }
       
        else if(fruit == "grapes"){
            result = grapes*quantity;
        }
        else {
           
        result = -1; 
        }
        return result;
    }
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"){
          float banana = 2.50;
         float apple = 1.20;
           float orange = 0.85;
            float grapefruit = 1.45;
             float kiwi = 2.70;
              float pineapple = 5.50;
               float grapes = 3.85;
        if(fruit == "banana"){
            result = banana*quantity;
        }
      
        else if(fruit == "apple"){
            result = apple*quantity;
        }
      
        else if(fruit == "orange"){
            result = orange*quantity;
        }
       
        else if(fruit == "grapefruit"){
            result = grapefruit*quantity;
        }
       
        else if(fruit == "kiwi"){
            result = kiwi*quantity;
        }
       
        else if(fruit == "pineapple"){
            result = pineapple*quantity;
        }
       
        else if(fruit == "grapes"){
            result = grapes*quantity;
        }
          else {
           
      result = -1;
        }
        return result; 
    }
     else {
             
      result = -1;
        }
   
}


// task6


#include<iostream>
using namespace std;

string calculateprice(string month, int stay);
main(){
    cout <<"Enter the month (May, June, July, August, September, October): ";
    string Month;
    cin>> Month;
    cout <<"Enter the number of stays: ";
    int Stay;
    cin>> Stay;
   cout << calculateprice(Month,Stay);

}
string calculateprice(string month, int stay){
    float result1, result2;
    string fresult;
    if(month == "May" || month == "October"){
        if(stay > 7 && stay <=14){
         result1 = (stay*50*0.05);
         result2 = (stay*65);
         return "Apartement: " +to_string(result2)+ "$\n " "Studio: " +to_string(result1)+ "$";
        }
        else if(stay > 14){
         result1 = (stay*50) - (stay*50*0.30);
         result2 = (stay*65) - (stay*65*0.10);
         return "Apartement: " +to_string(result2)+ "$\n " "Studio: " +to_string(result1)+ "$";
        }
    }
    else if(month == "June" || month == "September"){
        if(stay > 7 && stay <=14){
         result1 = (stay*75.20);
         result2 = (stay*68.70);
         return "Apartement: " +to_string(result2)+ "$\n " "Studio: " +to_string(result1)+ "$"; 
        }
        else if(stay > 14){
        result1 = (stay*75.20) - (stay*75.20*0.20);
         result2 = (stay*68.70) - (stay*68.70*0.10);
          return "Apartement: " +to_string(result2)+ "$\n " "Studio: " +to_string(result1)+ "$";
       }
    }
    else if(month == "July" || month == "August"){
        if(stay > 7 && stay <=14){
         result1 = (stay*76);
         result2 = (stay*77);
         return "Apartement: " +to_string(result2)+ "$\n " "Studio: " +to_string(result1)+ "$"; 
        }
        else if(stay > 14){
        result1 = (stay*76);
         result2 = (stay*77) - (stay*77*0.10);
         return "Apartement: " +to_string(result2)+ "$\n " "Studio: " +to_string(result1)+ "$"; 
       }
    } 
    
}

// task7

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

// task8
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

// task9
#include<iostream>
using namespace std;

string checkposition(int h, int x, int y);
main(){
    cout<<"Enter height: ";
    int H;
    cin>> H;
    cout <<"Enter x cordinate: ";
    int X;
    cin >>X;
    cout << "Enter Y cordinate: ";
    int Y;
    cin>>Y;
    cout << checkposition(H,X,Y);
}

string checkposition(int h, int x, int y){
    if(x == 0 && y == 0){
        cout << "Border";
    }
    else if(x == 0 && y == h){
        cout << "Border";
    }
    else if(x == 0 && y == h){
        cout << "Border";
    }
    else if(x == h && y == 0){
        cout << "Border";
    }
    else if(x == h && y == h){
        cout << "Border";
    }
    else if(x == 2*h && y == h){
        cout << "Border";
    }
    else if(x == 2*h && y == 0){
        cout << "Border";
    }
    else if(x == 3*h && y == h){
        cout << "Border";
    }
    else if(x == 3*h && y == 0){
        cout << "Border";
    }
    else if(x == h && y == 2*h){
        cout << "Border";
    }
    else if(x == h && y == 3*h){
        cout << "Border";
    }
    else if(x == h && y == 4*h){
        cout << "Border";
    }
    else if(x < 3*h && y < h){
        cout << "Inside";
    }
    else if((x < 2*h && x > h) && y < 4*h ){
        cout << "Inside";
    }
    else {
        cout <<"Outside";
    }
}

