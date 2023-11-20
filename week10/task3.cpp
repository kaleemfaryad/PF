#include <iostream>
using namespace std;

bool repeatingcycle(int size, int array[], int times);
main()
{
    cout << "Enter the length of the array: ";
    int Size;
    cin >> Size;
    int arraycycle[Size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < Size; i++)
    {
        cin >> arraycycle[i];
    }
    cout << "Enter the length of the cycle: ";
    int cycle;
    cin >> cycle;
    cout << repeatingcycle(Size, arraycycle, cycle);
}

bool repeatingcycle(int size, int array[], int times)
{
    if ((array[0] == array[0 + times]) && (array[1] == array[1 + times]))
    {
        return true;
    }
    else if (times > size)
    {
        return true;
    }
    return false;
}
