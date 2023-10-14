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