#include <iostream>
using namespace std;

int main()
{
    // char name[]="rahul\0";
    // cout<<name;
    char name[10];
    gets(name);
    cout << name << endl;
    return 0;
}