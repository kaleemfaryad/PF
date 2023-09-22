#include<iostream>
using namespace std;

main(){
int size,cost,area,result,result_1;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>> size;
cout<<"Enter cost of the bag: $";
cin>> cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>> area;
result = cost/size;
result_1 = size*area;
cout<< "Cost of fertilizer per pound: $" << result;
cout<<"\nCost of fertilizing per square foot: $" <<result_1;

}