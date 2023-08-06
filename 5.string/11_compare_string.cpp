#include <iostream>
using namespace std;

int main()
{
    char a[] = "painting";
    char b[] = "painter";
    int i, j;
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
    {
        if (a[i] != b[j])
        {
             cout << "not same string " << endl;
            break;
        }
    }

        if (a[i] == b[j])
        {
            cout << "equal string " << endl;
        }
        else if (a[i] < b[j])
        {
            cout << " smaller " << endl;
        }
        else
        {
            cout << "greater " << endl;
        }
    

    return 0;
}