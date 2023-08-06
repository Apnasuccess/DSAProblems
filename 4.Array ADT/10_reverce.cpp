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
    for (i = 0; i < arr.length; i++)
    {
        cout << " " << arr.a[i];
    }
}
void reverse(struct array *arr)
{
    int *B, i, j;
    B = new int[10];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->a[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->a[i] = B[i];
    }
    
}
void reverse2(struct array * arr)
    {
        for (int i = 0, j = arr->length - 1; i < j; i++, j--)
        {
            int temp;
            temp = arr->a[i];
            arr->a[i] = arr->a[j];
            arr->a[j] = temp;
        }
    }
int main()
{
    struct array arr1 = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, 10, 9};
    display(arr1);
    cout << endl
         << "the reverse of given array is ";
    reverse2(&arr1);
    display(arr1);
    return 0;
}