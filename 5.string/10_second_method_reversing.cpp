#include <iostream>
using namespace std;

int main()
{
    char s[] = "data base \0";
    char b[13];
    int i, j, t;
    int count=0;
    cout << "before reversing the string is ";
    for (j = 0; s[j] != '\0'; j++)
    { 
       // count++;
        cout << s[j];
    }
   // cout<<count;
    cout << endl<<
         << "after reversing the string is ";
    //  cout << endl;
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {


        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    cout << s;
    return 0;
}