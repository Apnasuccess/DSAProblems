#include <iostream>
using namespace std;
struct array
{
  int a[10];
  int length;
  int size;
};

void display(struct array arr)
{
  cout << "array element are " << endl;
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.a[i] << " ";
  }
  cout << endl;
}

void addelement(struct array *arr, int x)
{
  if (arr->length <= arr->size)
  {
    arr->a[arr->length] = x;
    arr->length++;
  }
}

void insertatindex(struct array *arr, int index, int n)
{
  int i;

  if (index > 0 && index <= arr->length)
  {
    for (i = arr->length; i > index; i--)
    {
      arr->a[i] = arr->a[i - 1];
      arr->a[index] = n;
      arr->length++;
    }
  }
}
int deleteelement(struct array *arr, int index)
{
  int x = 0;
  int i;
  if (index >= 0 && index < arr->length)
  {
    x = arr->a[index];
    for (i = index; i <= arr->length - 1; i++)
    {
      arr->a[i] = arr->a[i + 1];
      arr->length--;
      return x;
    }
  }
  return 0;
}

int main()
{
  struct array arr = {{1, 2, 3, 4, 5, 6}, 7, 10};
  addelement(&arr, 12);
  insertatindex(&arr, 0, 12);
  cout<<endl<<"deleted element are "<<deleteelement (&arr, 0)<<endl;
  cout<<endl<<"after dletion the all elements are "<<flush;
  display(arr);
  return 0;
}