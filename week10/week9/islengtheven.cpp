#include<iostream>
using namespace std;
bool islengtheven(string word);
main(){
    cout<<"Enter a String: ";
    string Word;
    cin>> Word;
   cout << islengtheven(Word);
}
bool islengtheven(string word){
    int counter = 0;
 for(int i = 0; word[i] != '\0';i++ ){
 counter++;
 }   
 if(counter % 2 == 0){
    return true;
 }
 else{
 return false;
 }
}
