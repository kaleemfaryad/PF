#include <iostream>
using namespace std;

int colortime(string cols[], int size);
main()
{
    cout << "Enter the size of Array: ";
    int Size;
    cin >> Size;
    int counter = 1;
    string colors[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter Element " << counter << ": ";
        cin >> colors[i];
        counter++;
    }
    cout<<"Time to color: " << colortime(colors,Size) <<" seconds";
}
int colortime(string cols[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            return counter = counter+2;
        }
        if (cols[i] != cols[i + 1])
        {
            counter = counter + 1;
        }
        counter =  counter + 2;
    }
    return counter;
}