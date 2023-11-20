#include <iostream>
using namespace std;

void dimensions(int size, int box[]);
main()
{
    cout << "Enter the number of boxes: ";
    int Size;
    cin >> Size;
    int boxs[Size];
    cout << "Enter the dimensions of the boxes (length, width, height): ";
    cout<<endl;
    for (int i = 0; i < Size * 3; i++)
    {
        cin >> boxs[i];
    }
    cout<<"Total volume of all boxes: ";
    dimensions(Size, boxs);
}

void dimensions(int size, int box[])
{
    int volume = 0;
    volume = box[0] * box[1] * box[2];
  
    for (int i = 3; i < size *3; i = i + 3)
    {
        volume += box[i] * box[i + 1] * box[i + 2];
    }

    cout << volume;
}