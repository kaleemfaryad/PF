#include <iostream>
using namespace std;

void reverseword(string word);
main()
{
    cout << "Enter a string: ";
    string Word;
    getline(cin, Word);
    reverseword(Word);
}
void reverseword(string word)
{
    for (int i = word.length() - 1; i >= 0; i--)
    {
        if (word[i] == ' ')
        {
            for (int j = i + 1; j < word.length(); j++)
            {
                cout << word[j];
                if (word[j] == ' ')
                {
                    break;
                }
            }
            cout << " ";
        }
    }
    for (int j = 0; word[j] != ' '; j++)
    {
    cout<< word[j];
}
}
