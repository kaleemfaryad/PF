#include <iostream>
using namespace std;

void evenodd(int arr[], int size, int n);
main()
{
    cout << "Enter the size of Array: ";
    int Size;
    int counter = 1;
    cin >> Size;
    int array[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter Element " << counter << ": ";
        cin >> array[i];
        counter++;
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    int times;
    cin >> times;
    evenodd(array, Size, times);
     cout<<"[";
        for(int i = 0;i< Size;i++){
            cout << array[i]  ;
            if(i < Size -1){
                cout<<",";
            }
        }
        cout <<"]";
         cout<<endl;
}
void evenodd(int arr[], int size, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < size; j++)
        {

            if (arr[j] % 2 == 0)
            {
                arr[j] = arr[j] - 2;
                res = arr[j];
            }
            else
            {
                arr[j] = arr[j] + 2;
                res = arr[j];
            }
        }
    }
}
