#include <iostream>
using namespace std;

long primorial(int number);
bool isPrime(int number)
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
main()
{
    cout << "Enter number: ";
    int Number;
    cin >> Number;
    cout << primorial(Number);
}

long primorial(int number)
{
    long count = 0;
    long k = 2;
    long result = 1;
    while (count != number)
    {
        if (isPrime(k))
        {
            result = result * k;
            count++;
        }
        k++;
    }
    return result;
}
