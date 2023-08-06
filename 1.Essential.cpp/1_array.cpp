#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    cout<<sizeof(a)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}