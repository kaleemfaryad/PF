#include <iostream>
using namespace std;
float projecttimecal(int h,int  d,int w);
main()
{
    cout << "Enter the needed hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the days that the firm has: ";
    int days;
    cin >> days;
    cout << "Enter the days that the number of all workers: ";
    int workers;
    cin >> workers;
    int result1 = projecttimecal(hours, days, workers);
    if(hours > result1){
       cout << "Not enough time! "<< result1 <<" hours needed.";
    }
    if(hours < result1){
       cout << "Yes!"<< result1 <<" hours left.";
    }
}
float projecttimecal(int h,int d,int  w){
    float result , result1;
      result = (d*w*9);
    if(result > h){
    result1 = result- h;
    return result1;
    } 
    if(result< h){
    result1 = h - result;
    return result1;
    } 
}