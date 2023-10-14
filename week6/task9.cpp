#include<iostream>
using namespace std;

string checkposition(int h, int x, int y);
main(){
    cout<<"Enter height: ";
    int H;
    cin>> H;
    cout <<"Enter x cordinate: ";
    int X;
    cin >>X;
    cout << "Enter Y cordinate: ";
    int Y;
    cin>>Y;
    cout << checkposition(H,X,Y);
}

string checkposition(int h, int x, int y){
    if(x == 0 && y == 0){
        cout << "Border";
    }
    else if(x == 0 && y == h){
        cout << "Border";
    }
    else if(x == 0 && y == h){
        cout << "Border";
    }
    else if(x == h && y == 0){
        cout << "Border";
    }
    else if(x == h && y == h){
        cout << "Border";
    }
    else if(x == 2*h && y == h){
        cout << "Border";
    }
    else if(x == 2*h && y == 0){
        cout << "Border";
    }
    else if(x == 3*h && y == h){
        cout << "Border";
    }
    else if(x == 3*h && y == 0){
        cout << "Border";
    }
    else if(x == h && y == 2*h){
        cout << "Border";
    }
    else if(x == h && y == 3*h){
        cout << "Border";
    }
    else if(x == h && y == 4*h){
        cout << "Border";
    }
    else if(x < 3*h && y < h){
        cout << "Inside";
    }
    else if((x < 2*h && x > h) && y < 4*h ){
        cout << "Inside";
    }
    else {
        cout <<"Outside";
    }
}