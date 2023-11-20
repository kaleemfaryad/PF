#include <iostream>
using namespace std;

bool rearrange(int size, int element[]);
main()
{
    cout << "Enter the length of the array: ";
    int Size;
    cin >> Size;
    int elements[Size];
    cout << "Enter the elements of the array:";
    cout << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> elements[i];
    }
    cout << "Can be arranged: ";
    cout << rearrange(Size, elements);
}
bool rearrange(int size, int element[])
{
    bool res;
    for (int j = 0; j < size; j++)
    {
        if ((element[j] > size) || (element[j] == element[j + 1]))
        {
            return false;
            break;
        }
    }
    return true;
}