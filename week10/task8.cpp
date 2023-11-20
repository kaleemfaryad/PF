#include <iostream>
using namespace std;

void rotations(int leng, string rotate[]);
main()
{
  cout << "Enter the length of the array: ";
  int length;
  cin >> length;
  string rotation[length];
  cout << "Enter the elements of the array ('left' or 'right'): ";
  cout << endl;
  for (int i = 0; i < length; i++)
  {
    cin >> rotation[i];
  }
  rotations(length, rotation);
}

void rotations(int leng, string rotate[])
{
  int res = 0;
  int count = 0;
  for (int i = 0; i < leng; i++)
  {
    if (rotate[i] == "right")
    {
      res = res + 90;
    }
    else if (rotate[i] == "left")
    {
      res = res - 90;
    }
  }
  cout<<"Number of full rotations: " << res/360;
}
