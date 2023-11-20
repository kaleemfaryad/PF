#include<iostream>
using namespace std;

int function(int arr[]);
int ascendingorder(int arr[]);
main(){
    cout<<"Enter the weights of the 10 packages: ";
    cout << endl;
    int array[10];
    for(int i = 0 ; i < 10;i++){
        cin >> array[i];
    }
     ascendingorder(array);
}
int ascendingorder( int arr[]){
int  var = 0;
cout << "[";
for(int i = 0; i < 10;i++){
var= arr[i];
for(int j =10 ; j > i; j--){
    if(var > arr[j]){
        var = arr[j];
        arr[j] = arr[i];
        arr[i] = var;
    }
}
 cout<< arr[i] ;
    cout<< ", ";
}
cout<<"]";

}
