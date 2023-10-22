#include<iostream>
using namespace std;

int triangle(int triangle);

main(){
    cout <<"Enter number of Triangle: ";
    int Triangle;
    cin>> Triangle;
    cout << triangle(Triangle);
}

int triangle(int triangle){
    int result = 0;
    for(int i = 0;i<= triangle;i++){
    result += i;
    }
    return result;
} 