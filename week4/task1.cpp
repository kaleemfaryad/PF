#include<iostream>
using namespace std;
void equal(int x,int y);

main(){
cout << "Enter the first number: ";
int x, y;
cin >> x;
cout << "Enter the second number: ";
cin >> y;
 equal(x,y);
}

void equal(int x,int y){
if(x==y){
 cout << "true";
}
if(x!=y){
cout <<"false";

}



}
