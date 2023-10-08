#include<iostream>
#include<conio.h>
using namespace std;
void header();
int menu();
double costperproduct(float price, int quantity , float tax);
void productdata(string name, float price, int quantity,float tax,double total);

int main(){
    string name1 ="", name2 = "", name3 = "";
    float price1 = 0.0, price2 =0.0, price3 =0.0;
    int quantity1 = 0, quantity2 =0, quantity3 =0.0;
    float tax1 = 0.0, tax2 =0.0, tax3 =0.0;
    double total1 = 0.0, total2 =0.0, total3 =0.0;
    while(true){
        header();
        int option = menu();
        if(option == 1){
        cout<<"Enter the name of 1st Product: ";
        cin >> name1;
        cout<<"Enter the price of 1st Product: ";
        cin >> price1;
        cout<<"Enter the tax rate on 1st Product: ";
        cin >> tax1;
        cout<<"Enter the qunantity 1st Product: ";
        cin >> quantity1;
        }
        if (option == 2){
        cout<<"Enter the name of 2nd Product: ";
        cin >> name2;
        cout<<"Enter the price of 2nd Product: ";
        cin >> price2;
        cout<<"Enter the tax rate on 2nd Product: ";
        cin >> tax2;
        cout<<"Enter the qunantity 2nd Product: ";
        cin >> quantity2;
        }
        if (option == 3){
         cout<<"Enter the name of 3rd Product: ";
        cin >> name3;
        cout<<"Enter the price of 3rd Product: ";
        cin >> price3;
        cout<<"Enter the tax rate on 3rd Product: ";
        cin >> tax3;
        cout<<"Enter the qunantity 3rd Product: ";
        cin >> quantity3;

        }
        if (option == 4){
            total1 = costperproduct(price1, quantity1,tax1);
            total2 = costperproduct(price2, quantity2,tax2);
            total3 = costperproduct(price3, quantity3,tax3);
           

            float totalpayable = total1 + total2 + total3;

            cout<<"Total Payable Amount (including tax): " << totalpayable << endl;
        }
        if (option == 5){
               cout << "All Products Data" << endl;
               cout << "Name" << "\t" << "Price" << "\t" <<"Quantity" <<"\t" << "Tax" <<"\t" <<"TotalPerProduct" <<endl;
              productdata(name1,price1,quantity1,tax1,total1);
              productdata(name2,price2,quantity2,tax2,total2);
              productdata(name3,price3,quantity3,tax3,total3);
        }
        if (option == 6){
            return 0;
        }
        cout << "Press any Key to Continue: ";
        getch();
        system("cls");
    } 
 header();
 menu();
 int option;
 if(option == 1){
    cout <<"You have Entered Option 1";
    
 }
 if(option == 2){
    cout <<"You have Entered Option 2";

 }
 if(option ==3){
    cout <<"You have Entered Option 3";

 }

}
void header(){
 cout << "*****************************************************" <<endl;
 cout << "             MOBILE SHOP MANAGEMENT SYSTEM           " <<endl;
 cout << "*****************************************************" <<endl;
 cout << endl;
}
int menu(){
    int option ;
 cout <<"Select pne of the following otions number..." <<endl;
 cout <<"1. Add 1st Product Data" <<endl;
 cout <<"2. Add 2nd Product Data" <<endl;
 cout <<"3. Add 3rd Product Data" <<endl;
 cout <<"4. Calculate Total" <<endl;
 cout <<"5. View All Product Data" <<endl;
 cout <<"6. Exit" <<endl;
 cout << "Your Option.. ";
 cin >> option;
 return option;
}
double costperproduct(float price, int quantity , float tax){
    double total;
    total = price + quantity;
    total = total + total * ((tax/100));
    return total;
}
void productdata(string name, float price, int quantity,float tax,float total){
    cout<< name <<"\t" << price <<"\t" << quantity << "\t\t" << tax <<"\t" << total << endl;  
}