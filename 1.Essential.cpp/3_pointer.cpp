#include <iostream>
using namespace std;

int main()
{
  /*  cout << "accessing pointer in simple way" << endl;
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl;
    cout << a << endl;
    cout << *p << endl;*/
    cout << "accessing pointer using pointer to array " << endl;

    int a[10] = {2, 4, 6, 8, 10};
    int *p;
    p = &a[0];
    for (int i = 0; i < 5; i++)
    { 
        cout << a[i] << endl;
         //cout << p[i] << endl;
    }

    return 0;
}