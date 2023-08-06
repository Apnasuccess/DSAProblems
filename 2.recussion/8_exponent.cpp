#include <iostream>
#include <math.h>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(m, n - 1) * m;
}

int main()
{
    int r = 0;
    r = pow(2, 5);
    cout << r << endl;
    return 0;
}