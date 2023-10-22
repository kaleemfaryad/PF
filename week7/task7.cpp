#include <iostream>
using namespace std;

void patient(int days);
main()
{
  cout << "Enter the number of days you visited Hospital: ";
  int Days;
  cin >> Days;
   patient(Days);
}
void patient(int days){
  int D1 = 0;
  int treated = 0;
  int untreated = 0;
  int doctors = 7;
  for (int i = 1; i <= days; i++)
  {
    cout << "Number of patients who visited hospital on Day " << i << ": ";
    cin >> D1;
    if (D1 < doctors)
    {
      treated =  treated + D1;
    }
    else
    {
      treated = treated + doctors ;
      untreated += D1 - doctors;
    }
    if (D1 > doctors)
    {
      doctors++;
    }
  }
  cout << "Treated patients: " << treated << endl;
  cout << "Untreated patients: " << untreated << endl;
}
