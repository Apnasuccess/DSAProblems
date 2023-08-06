#include <iostream>
using namespace std;

int main()
{
   int a[10], n;
   cout << "enter the array elemnt size " << endl;
   cin >> n;
   cout << "enter the array element " << endl;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   cout << "array element are " << endl;
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << endl;
   }

   return 0;
}
