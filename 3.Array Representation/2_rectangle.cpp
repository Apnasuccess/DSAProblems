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

    struct rectangle r1;
    cout <<"the size of all rectangle space are  "<< sizeof(r1) << endl;
    cout <<"size of length are "<< sizeof(r1.length) << endl;
    cout <<"size of breadth are "<<  sizeof(r1.breigth) << endl;
    cout <<"size of x are "<<  sizeof(r1.x) << endl;

    return 0;
}