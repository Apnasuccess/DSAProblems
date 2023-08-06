#include<iostream>
using namespace std;
//int fact (int n){
//     int t1=0,t2=1,s=0,i;
//     if(n<=1){
//        return n;
//     }
//     {
//        for ( i = 2; i<=n; i++)
//        {
//             s=t1+t2;
//             t1=t2;
//             t2=s;
//        }
//        return s;      poore question ko bina soche ye code bhi try kr lea jisme mera time
                                        // brbad hua 
//        
//     }
//    
//}
//int combination(int n, int r){
//    int t1,t2,t3;
//    t1=fact(n);
//    t2=fact(r);
//    t3=fact(n-r);
//    return t1/(t2*t3);
//}
int  pascal(int n , int r)
{
  if (r==0 || n==r){
    return 1;
  }
  else{
    return pascal(n-1,r-1) +pascal(n-1,r);         
  }
  
}
int main()
{
    int n,r,result=0;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;
    
 result=pascal(n,r);
 cout<<"the valuse of pascal triangle is "<<result<<endl;
 return 0;
}