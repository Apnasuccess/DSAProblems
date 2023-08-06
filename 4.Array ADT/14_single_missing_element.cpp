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
        cout << arr.a[i];
    }
}
int sumofnumber()
{
    int n, sum;
    cout << " enter the last digiit of the numbers " << endl;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    return sum;
}

int totalsum(struct array arr)
{
    int i;
    int total = 0;
    for (i = 0; i < arr.length; i++)
    {
        total = total + arr.a[i];
    }
    return total;
}
 
int main()
{
    struct array arr = {{1, 2, 3, 4, 5, 6, 8, 9}, 10, 8};
    int result;
    result=sumofnumber()-totalsum(arr);
    cout<<"result is "<<result;
    display(arr);
    return 0;
}