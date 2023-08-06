#include <iostream>
using namespace std;

int main()
{
    int i;
    int vcount = 0;
    int ccount = 0;
    char a[] = "How are you \0";
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            vcount++;
            // cout << a[i];
        }

        else if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            /* code */ ccount++;
            // cout << a[i];
        }
    }
    cout << "total word are " << i << endl;
    //  cout << "in the given statement ,all vowel are " << endl;
    cout << "all vowel are " << vcount << endl;
    // cout << "in the given statement ,all consonent are " << endl;
    cout << "all cinsonent are " << ccount;

    return 0;
}