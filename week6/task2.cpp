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
