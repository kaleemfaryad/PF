#include <iostream>
using namespace std;
string Broken(string correct, string wrong);
int main(){
	string correct, wrong;
	cout << "Enter the correct phrase: ";
	getline(cin, correct);
	cout << "Enter what you actually typed: ";
	getline(cin, wrong);
	cout << "Broken keys: " << Broken(correct, wrong);	
}

string Broken(string correct, string wrong){
	string res;
		for(int i=0; i<correct.length();i++){

			if(correct[i] != wrong[i])
			{
            	bool counter = false;
				for(int j = 0 ; j < i ; j++)
				{
					if(correct[j] == correct[i])
						counter = true;
				}
				if(!counter){
					res = res + correct[i];
			}
            }
		}
	return res;
}
