#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int bridgth;
};

int main()
{

    rectangle *p;
    p = new rectangle;
    p->length = 25;
    p->bridgth = 7;
    cout << p->length << endl;
    cout << p->bridgth << endl;
    return 0;
}

/*

rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.bridgth << endl;
    rectangle *p = &r;
    cout << p->length << endl;
    cout << p->bridgth << endl;

*/