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
    cout<<endl << "element are ";
    for (int i = 0; i < arr.length; i++)
    {
        cout <<  arr.a[i]<<" ";
    }
}

int binarysearch(struct array arr, int key)
{
    int low = 0;
    int mid;
    int high = arr.length - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr.a[mid])
        {
            return mid;
        }
        else if (key < arr.a[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int key;
    struct array arr = {{1, 22, 33, 44, 55, 66, 77, 88, 99, 100}, 10, 10};
    cout << "enter the key element ";
    cin >> key;
    cout << "after your searching biniry search ,the result is "<<endl;
   cout<< binarysearch(arr, key);
    display(arr);
    return 0;
}