#include<iostream>
using namespace std;


int fact(int n){
    if (n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int ncr(int n,int r){
int num=fact(n);
int dinom=fact(r)*fact(n-r);
return num/dinom;
}
int NCR(int n,int r){
    if (n==r ||r==0)
    {
       return 1; 
    }
    return NCR(n-1,r-1)+NCR(n-1,r);
    
}

int main(){
    int r=0;
    r=ncr(5,3);
    cout<<r;
    return 0;
}