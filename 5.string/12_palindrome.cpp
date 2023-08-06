#include <iostream>
using namespace std;

int main()
{
    char s[] = "121 \0";
    char b[13];
    int i, j;
    cout << "before reversing the string is ";
    for (i = 0; s[i] != '\0'; i++)
    {
        cout << s[i];
    }
    cout << endl
         << "after reversing the string is ";
    //  cout << endl;
    i = i - 1;
    for (j = 0; i >= 0, i--; j++)
    {
        b[j] = s[i];
    }
    b[j] = '\0';

    cout << b;
    if (s[i] == b[j])
    {
        cout << "palendrome number " << endl;
    }
    else
    {
        cout << "non palendrome number ";
    }

    return 0;
}