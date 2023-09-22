#include<iostream>
using namespace std;

main(){
string name;
float weight,result;
cout<<"Enter the Name of the person: ";
cin>> name;
cout<<"Enter the target weight loss in kilograms: ";
cin>> weight;
result = weight*15;
cout<< name << " will need " << result <<" days to lose " << weight <<" kg of weight by following the doctor's suggestion";

}