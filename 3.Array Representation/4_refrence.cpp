/* References are used to refer an existing  variable in another
   name whereas pointers are used to store address of variable  */

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    int &r = a;
    r = 25;
    cout << a << endl
         << r << endl;
    int b = 30;
    r = b;
    cout << b << endl
         << r << endl;
    return 0;
}