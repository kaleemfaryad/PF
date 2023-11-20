#include <iostream>
using namespace std;

void commoncharacter(string w1, string w2);
main()
{
    cout << "Enter the first string: ";
    string word1, word2;
    cin >> word1;
    cout << "Enter the second string: ";
    cin >> word2;
    commoncharacter(word1, word2);
}
void commoncharacter(string w1, string w2)
{
    int counter = 0;

    for (int i = 0; w1[i] != '\0'; i++)
    {
        for (int j = 0; w2[j] != '\0'; j++)
        {
         
            if (w1[i] == w2[j])
            {
                w2[j]='#';
                counter++;
                break;
            }
        }
    }
    cout << "Number of common chracter: " << counter;
}