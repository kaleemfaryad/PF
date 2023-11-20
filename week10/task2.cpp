#include <iostream>
using namespace std;

void words(int size, string words[], char ch);
main()
{
    cout << "Enter how many words you want to Enter: ";
    int Size;
    int c = 1;
    cin >> Size;
    string Words[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter word " << c << ": ";
        cin >> Words[i];
    }
    cout << "Enter the letter you want to count: ";
    char Ch;
    cin >> Ch;
    cout << Ch << " shows up ";
    words(Size, Words, Ch);
    cout << " times in the data.";
}

void words(int size, string words[], char ch)
{
    string newvar;
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        newvar = words[i];
        for (int j = 0; newvar[j] != '\0'; j++)
        {
            if (newvar[j] == ch)
            {
                counter++;
            }
        }
    }
    cout << counter;
}