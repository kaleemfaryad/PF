#include<iostream>
using namespace std;
void flowerShop(int red,int white,int tulips);

main(){
cout << "Red Rose: ";
int red;
cin >> red;
cout << "White Rose: ";
int white;
cin >> white;
cout << "Tulips: ";
int tulips;
cin >> tulips;
flowerShop(red,white,tulips);
}
void flowerShop(int red,int white,int tulips){
float total;
total = 2.00*red + 4.10*white + 2.50*tulips ;
cout << "Original Price: $" << total <<endl;
if(total>200) {
cout << "Price after Discount: $" << total - total*0.2 ;
}
if(total<201){
cout << "No discount applied.";
}
}