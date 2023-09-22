#include<iostream>
using namespace std;

main(){
int input,result;
cout << "Enter the number of sides of the polygon: ";
cin >> input;
result = (input-2)*180;
cout << "The sum of internal angles of a " << input <<"-sided polygon is: " << result <<" degrees" ;
}