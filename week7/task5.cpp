#include <iostream>
using namespace std;

bool prime(int number);

main()
{
    cout << "Enter number: ";
    int Number;
    cin >> Number;
    cout << prime(Number);
}

bool prime(int number)
{
    bool result = 0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
