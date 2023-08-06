#include <iostream>
using namespace std;

struct array
{
    int a[10];
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

void insert(struct array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->a[i] > x)
    {
        arr->a[i + 1] = arr->a[i];
        i--;
    }
    arr->a[i + 1] = x;
    arr->length++;
}

int issorted(struct array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.a[i] > arr.a[i + 1])

            return 0;
    }
    return 1;
}

int main()
{
    struct array arr = {{2, 3, 5, 10, 15}, 10, 5};

    cout << issorted(arr) << endl;

    display(arr);
    return 0;
}