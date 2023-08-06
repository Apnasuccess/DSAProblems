 
#include <iostream>
using namespace std;
int fib(int n)
{
 //int t0=0,t1=1,s=0,i;

 if(n<=1) return n;

 //for(i=2;i<=n;i++)
 //{
 //s=t0+t1;
 //t0=t1;
 //t1=s;
 //}
//
else
   return fib(n-2)+fib(n-1);
 //return s;
}
 
int main()
{
  int r,n;
  cin>>n;
  r=fib(n);
  cout<<r;
 return 0;
}