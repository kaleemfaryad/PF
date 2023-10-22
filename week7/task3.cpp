#include<iostream>
using namespace std;

void amplify(int number);
main(){
    cout <<"Enter the number to Amplify: ";
    int num;
    cin>> num;
    amplify(num);
}

void amplify(int number){
    for(int i = 1; i <= number;i++ ){
      int n = i;
      if(i % 4 == 0){
        n = i*10;
      }
       cout << n;
       if(i < number){
        cout << ",";
       }
    }
}