#include <iostream>
using namespace std;
struct array
{
    int a[20];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    cout << "array element are ";
    for (i = 0; i < arr.length; i++)
    {
        cout << " " << arr.a[i];
    }
}
void elementwithsum(struct array arr)
{
    int i, j, k;
    cout << "enter the value of element that you want to find in terms of k " << endl;
    cin >> k;
    for (i = 0; i < arr.length - 1; i++)
    {
        for (j = i + 1; j < arr.length; j++)
        {
            if (arr.a[i] + arr.a[j] == k)
            {
                cout << " the sum of " << arr.a[i] << " and " << arr.a[j] << " is " << k << endl;
            }
        }
    }
}

int main()
{
    struct array arr = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 20, 10};
    elementwithsum(arr);
    display(arr);
    return 0;
}