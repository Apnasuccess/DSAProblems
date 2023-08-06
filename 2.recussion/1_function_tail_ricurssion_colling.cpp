#include<iostream>
using namespace std;
void fun1(int n){
    if(n>0){
        cout<<n<<" ";
        fun1(n-1);
    }
}
int main(){
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    fun1(a); 
    return 0;
}