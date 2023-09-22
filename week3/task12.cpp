#include<iostream>
using namespace std;

main(){
int square_meter,width,height,result;
cout << "Number of squae meters you can paint: ";
cin>> square_meter;
cout<< "Width of the single wall (in meters): ";
cin>> width;
cout<< "Height of the single wall (in meters): ";
cin>> height;
result = (square_meter)/(width*height);
cout <<"Number of walls you can paint: " << result;







}