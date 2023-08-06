#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct rectangle r = {10, 52};
    
    cout << "all about rectangle" << endl;

    r.length = 70; // updated valu
    cout << sizeof(r.length) << endl;
    cout << sizeof(r.breadth) << endl;

    cout << r.length << " " << r.breadth << endl;
    cout << sizeof(r) << endl;

    
    cout << "all about student " << endl;
  
   struct student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;


    return 0;
}