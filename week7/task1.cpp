#include<iostream>
using namespace std;

main(){
   cout << "Enter desired number of rows: ";
   int row;
   cin>> row;
   for(int i=1;i<=row;i++){
    for(int j=row;j>=i;j-- ){
        cout<<"*";
    }
    cout <<endl;
   }
}