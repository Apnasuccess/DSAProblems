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
void minmax(struct array arr)
{
    int min, max, i;
    max = arr.a[0];
    min = arr.length;
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] < min)
        {
            min = arr.a[i];
        }
        else if (arr.a[i] > max)
        {
            max = arr.a[i];
        }
    }
    cout << "minimum number " << min << endl;
    cout << "maximum " << max << endl;
}

int main()
{
    struct array arr = {{6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19}, 20, 11};
    minmax(arr);
    display(arr);
    return 0;
}