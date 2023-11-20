#include<iostream>
using namespace std;

void changepin(string pin);
main(){
    int counter = 0;
    cout<<"Enter your PIN (4 digits): ";
    string pin;
    cin>> pin;
    for(int k = 0; pin[k] != '\0';k++){
        counter++;
    }
    for(int i =0 ; pin[i] != '\0';i++){
        if(pin[i] != '0'&& pin[i] != '1'&& pin[i] != '2'&& pin[i] != '3'&& pin[i] != '4'&& pin[i] != '5'&& pin[i] != '6'&& pin[i] != '7'&& pin[i] != '8'&& pin[i] != '9' ){
            cout <<"Invalid input";
            return 0;
        }
    }
    if(counter == 4){
        changepin(pin);
    }
    else{
        cout <<"Invalid input";
    } 
}

void changepin(string pin){
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for(int i = 0; i<=4; i++){
        if (pin[i - 1] == '0'){
            cout << moves[i - 1];
        }
        if (pin[i - 1] == '1'){
            cout << moves[i];
        }
        if (pin[i - 1] == '2'){
            cout << moves[i + 1];
        }
        if (pin[i - 1] == '3'){
            cout << moves[i + 2];
        }
        if (pin[i - 1] == '4'){
            cout << moves[i + 3];
        }
        if (pin[i - 1] == '5'){
            cout << moves[i + 4];
        }
        if (pin[i - 1] == '6'){
            cout << moves[i + 5];
        }
        if (i == 1)
        {
            if (pin[0] == '7'){
                cout << moves[7];
            }
            if (pin[0] == '8'){
                cout << moves[8];
            }
            if (pin[0] == '9'){
                cout << moves[9];
            }
        }
        if (i == 2)
            if (pin[1] == '9'){
                cout << moves[0];
            }
            else
            {
                if (pin[i - 1] == '7')
                    cout << moves[i + 6];
                if (pin[i - 1] == '8')
                    cout << moves[i + 7];
            }
        if (i == 3)
        {
            if (pin[2] == '8')
                cout << moves[0];
            if (pin[2] == '9')
                cout << moves[1];
        }
        else
        {
            if (pin[i - 1] == '7')
                cout << moves[i + 6];
        }
        if (i == 4)
        {
            if (pin[3] == '7')
                cout << moves[0];
            if (pin[3] == '8')
                cout << moves[1];
            if (pin[3] == '9')
                cout << moves[2];
        }
        if (i != (0&&4)){
            cout << ", ";
        }
    }
}