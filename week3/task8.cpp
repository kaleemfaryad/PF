#include<iostream>
using namespace std;

main()
{
float veg,fruit,veg_total,fruit_total,earning;
cout <<"Enter vegatable price per kilogram (in coins): ";
cin>> veg;
cout <<"Enter fruit price per kilogram (in coins): ";
cin>> fruit;
cout <<"Enter total kilogram of vegatables: ";
cin>> veg_total;
cout <<"Enter total kilogram of fruits: ";
cin>> fruit_total;
earning = (veg*veg_total)/(1.94) + (fruit*fruit_total)/(1.94);
cout<< "Total earnings in Rupees (Rps): " << earning ;







}