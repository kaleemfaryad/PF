#include<iostream>
using namespace std;

string decideactivity(string temp, string humid);
main(){
    string temperature , humidity;
cout <<"Enter temperature (warm or cold): ";
cin>>temperature;
cout <<"Enter humidity (dry or humid): ";
cin>>humidity;
string result = decideactivity(temperature,humidity);
cout << "Recommended activity: " << result ;

}
string decideactivity(string temp, string humid){
    string result;
    if(temp == "warm" && humid == "dry")
     result = "Play tennis" ;
    else if(temp =="warm" && humid =="humid")
    result = "Swim";
    else if(temp == "cold" && humid == "dry")
    result = "Play basketball";
    else if(temp == "cold" && humid == "humid")
    result = "Watch TV";
    return result;
}

