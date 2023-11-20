#include<iostream>
using namespace std;
bool checkidentical(string word[],int size);
main(){
    cout<<"Enter the size of Array: ";
    int Size;
    int counter = 1;
    cin>> Size;
    string array[Size];
    for(int i = 0; i < Size; i++ ){
        cout <<"Enter Element " <<counter <<": ";
        cin >> array[i];
        counter++;
    }
cout << checkidentical(array,Size);
}
bool checkidentical(string word[],int size){
for(int i =0 ; i < size;i++){
    if(word[i] == word[i+1]){
        return true;
}
else{
    return false;
}
}
    
}