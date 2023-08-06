#include<iostream>
using namespace std;
struct array {
    int a[20];
    int size;
    int length;
};
void display(struct array arr){
    int i;
    cout<<" array element are ";
    for(i=0;i<arr.length;i++){
        cout<<" "<<arr.a[i];
    }
}
void duplicate(struct array arr){
int lastduplicate=0;
int i;
for ( i = 0; i < arr.length; i++)
{
     if (arr.a[i]==arr.a[i+1] && arr.a[i]!=lastduplicate)
     {
       cout<<" "<<arr.a[i];
       lastduplicate=arr.a[i];
     }
     
}


}
 
int main(){
    struct array arr={{ 3,6,8,8,10,12,15,15,15,20},20,10};
     duplicate(arr);
    display(arr);
    return 0;
}



/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lastduplicate=0;
int i;
for ( i = 0; i < n+1; i++)
{
     if (a[i]==a[i+1] && a[i]!=lastduplicate)
     {
       return a[i];
       lastduplicate=a[i];
     }
     
}
    }
};
 

*/