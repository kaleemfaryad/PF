#include <iostream>
using namespace std;
string containseven(int numbers[], int size);
main()
{
    cout << "Enter the size of Array: ";
    int Size;
    int counter = 1;
    cin >> Size;
    int Number[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter Element " << counter<<": ";
        cin >> Number[i];
        counter++;
    }
    cout << containseven(Number, Size);
}
string containseven(int numbers[], int size)
{
    int newnum = 0;
    string output = "there is no 7 in the array";
    for (int i = 0; i < size; i++)
    {
        while (numbers[i] > 0)
        {
            newnum = numbers[i] % 10;
            if (newnum == 7)
            {
                output = "Boom!";
            }
            numbers[i] = numbers[i] / 10;
        }
    }
    return output;
}
