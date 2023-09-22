#include<iostream>
using namespace std;

main(){
string name;
int adult_price,child_price,adult_ticket,child_ticket,amount;
int total,donation,remaining;
cout<<"Enter the movie name: ";
cin>> name;
cout<<"Enter the adult ticket price: $";
cin>> adult_price;
cout<<"Enter the child ticket price: $";
cin>> child_price;
cout<<"Enter the number of adult ticket sold: ";
cin>> adult_ticket;
cout<<"Enter the number of child ticket sold: ";
cin>> child_ticket;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>> amount;
total = (adult_price*adult_ticket)+ (child_price*child_ticket);
cout <<"\nMovie: "<< name;
cout <<"\nTotal amount generated from ticket sales: $" << total;
donation = total*10/100;
cout <<"\nDonation to charity (10%): $" << donation;
remaining = total - donation;
cout<<"\nRemaining amount after donation: $" << remaining;


}