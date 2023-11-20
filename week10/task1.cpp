#include <iostream>
using namespace std;

void progressday(int size, int saturday[]);
main()
{
    cout << "Enter the number of Saturdays: ";
    int Size;
    int c = 1;
    cin >> Size;
    int saturday[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter miles run for Saturday " << c << ": ";
        cin >> saturday[i];
        c++;
    }
    cout << "Total progres days: ";
    progressday(Size, saturday);
}
void progressday(int size, int saturday[])
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (saturday[i + 1] > saturday[i])
        {
            count++;
        }
    }
    cout << count;
}