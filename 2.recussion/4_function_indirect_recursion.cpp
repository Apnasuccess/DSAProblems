#include<iostream>
using namespace std;
void funB(int a);
void funA(int n){
if (n>0)
{ 
    cout<<n<<endl;
    funB(n-1);
}

}
void funB( int a){
    if (a>1)
    {
        cout<<a<<endl;
        funA(a/2);
    }
}
int main(){
    int a=20;
    funB(a);
    return 0;

}

/*#include<iostream>
using namespace std;
int sum(int x,int y){
  int c=0;
  c=x+y;
  return c;
}
int main(){
    int a,b,z;
    cout<<"two value "<<endl;
    cin>>a>>b;
   z= sum(a,b);
    cout<<"sum is "<<z;
    return 0;
}*/