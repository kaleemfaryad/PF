#include<iostream>
using namespace std;

main(){
float imposter,count,final;
int result;
cout<<"Enter Imposter Count: ";
cin>> imposter;
cout<< "Enter Player Count: ";
cin>> count;
result = (imposter/count)*100;

cout<<"Chance of being an imposter: " << result <<"%";



}