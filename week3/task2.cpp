#include<iostream>
using namespace std;

main(){
int minutes,second,frames,result;
cout <<"Number of Minutes: ";
cin >> minutes;
cout <<"Frames per Second: ";
cin >> frames;
result = minutes*60*frames;
cout <<"Total Number of Frames: " << result;  
}