#include<iostream>
using namespace std;

int fact(int x){
    if (x==0)

    {
    return 1;    /* code */
    }
    else{
        return fact(x-1)*x;
    }
}

int main(){
    int r=0;
    r=fact(5);
cout<<r<<endl;
    return 0;
}