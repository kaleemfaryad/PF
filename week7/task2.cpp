#include <iostream>
using namespace std;

void diamond(int row);
main()
{
    cout << "Enter desired number of rows: ";
    int rows;
    cin >> rows;
    diamond(rows);
}
void diamond(int row)
{
    for (int i = 1; i <= row / 2; i++)
    {
        for (int j = 1; j <= ((row / 2) - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int ri = row / 2; ri >= 1; ri--)
    {
        for (int rj = 1; rj <= ((row / 2) - ri); rj++)
        {
            cout << " ";
        }
        for (int rk = 1; rk <= ri; rk++)
        {
            cout << "*";
        }
        cout << endl;
    }
}