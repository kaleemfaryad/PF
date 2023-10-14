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