#include <iostream>
using namespace std;

int main()
{
    int i;
    char s[] = "welcome";
    for (i = 0; s[i] != '\0'; i++)
    {
        /* code */
        s[i] = s[i] - 32;
    }
    cout << s;
    return 0;
}