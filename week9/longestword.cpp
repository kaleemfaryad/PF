#include <iostream>
using namespace std;
bool check(string word);
string Longestword(string word[], int size);


main()
{
    int Size;
    cout << "Enter the number of words: ";
    cin >> Size;
    string Word[Size];
    cout << "Enter the words, one by one:" << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> Word[i];
    }
    string result = Longestword(Word, Size);
     cout << "Longest 7-segment word: " << result << endl;
}
bool check(string word)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        char ch = word[i];
        if (ch == 'k' || ch == 'm' || ch == 'v' || ch == 'w' || ch == 'x')
        {
            return false;
        }
    }
    return true;
}
string Longestword(string word[], int size)
{
    string large;
    for (int i = 0; i < size; i++)
    {
        if (check(word[i]) && word[i].length() > large.length())
        {
            large = word[i];
        }
    }
    return large;
}


