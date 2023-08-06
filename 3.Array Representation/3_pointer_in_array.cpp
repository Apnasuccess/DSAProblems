#include <iostream>
using namespace std;
struct rectangle
{

    int length;
    int breigth;
    char x;
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}
/*  int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;*/

/*  cout << "if we dicliear point using array operation then ->" << endl;
int b[5] = {1, 2, 3, 4, 5};
int *q;
q = &b[5];
cout << q << endl;*/
/* int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = &a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
*/

/* int *p;
    p =  new int[5];
    p[0] = 1, p[1] = 2, p[2] = 3, p[3] = 4, p[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    delete []p;
    free (p);
*/